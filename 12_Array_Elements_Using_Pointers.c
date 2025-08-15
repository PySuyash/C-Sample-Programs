// Counting the frequency of each number.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int* arr = (int*)malloc(n * sizeof(int));
    int* visited = (int*)calloc(n, sizeof(int));  // 0 means not visited

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }

    printf("\n== Frequency of Elements ==\n");
    for (int i = 0; i < n; i++) {
        if (*(visited + i) == 1) continue;

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (*(arr + i) == *(arr + j)) {
                count++;
                *(visited + j) = 1;
            }
        }

        printf("%d → %d time%s\n", *(arr + i), count, count > 1 ? "s" : "");
    }

    free(arr);
    free(visited);
    return 0;
}
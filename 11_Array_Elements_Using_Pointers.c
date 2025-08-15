// Reversing array using pointers.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("\nEnter the size of array: ");
    scanf("%d", &n);

    int* arr = (int *)malloc(n*sizeof(int));
    int* ptr = arr;

    printf("\nEnter the elements of array\n");
    for (int i=0 ;i<n; i++) {
        scanf("%d", ptr+i);
    }

    printf("\n== Reversed Array ==\n");
    for (int i=n-1; i>=0; i--) {
        printf("%d\t", *(ptr+i));
    }

    free(arr);

    return 0;
}
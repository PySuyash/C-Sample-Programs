#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("\nEnter the size of array: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n*sizeof(int));
    int *ptr = arr;

    if (arr == NULL) {
        printf("\nMemory Allocation Failed\n");
        return 1;
    }

    printf("\nEnter the elements of array\n");
    for (int i=0; i<n; i++) {
        scanf("%d", ptr+i);
    }

    printf("\n== Your Array ==\n");
    for (int i=0; i<n; i++) {
        printf("%d\t", *(arr+i));
    }

    char ch;
    printf("\nWant to add more elements(y/n): ");
    scanf(" %c", &ch);

    if (ch == 'y') {
        int m;

        printf("\nEnter the number of elements you want to add: ");
        scanf("%d", &m);

        arr = (int *)realloc(arr, (n+m)*sizeof(int));
        if (arr == NULL) {
            printf("\nMemory Allocation Error\n");
            return 1;
        }

        printf("\nEnter the elements of array\n");
        for (int i=n; i<n+m; i++) {
            scanf("%d", ptr+i);
        }

        printf("\n== Your new array ==\n");
        for (int i=0; i<n+m; i++) {
            printf("%d\t", *(ptr+i));
        }
    } else {
        printf("\t\tOK\n");
    }


    return 0;
}
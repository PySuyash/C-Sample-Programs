// Squaring array elements by pasing array to function and using pointers.

#include <stdio.h>
#include <stdlib.h>

void square(int* ptr, int n) {
    int* array = (int *)malloc(n* sizeof(int));
    int* pttr = array;
    for (int i=0; i<n; i++) {
        *(pttr + i) = *(ptr + i);
    }

    for (int i=0; i<n; i++) {
        *(pttr + i) = *(pttr + i) * *(pttr + i);
    }

    printf("\n=== Squared Array ===\n");
    for (int i=0; i<n; i++) {
        printf("%d\t", *(pttr + i));
    }
}

int main() {
    int n;

    printf("\nEnter the number of elements of array: ");
    scanf("%d", &n);

    int* arr = (int *)malloc(n*sizeof(int));
    int* ptr = arr;

    printf("\nEnter the elememts of array\n");
    for (int i=0; i<n; i++) {
        scanf("%d", ptr+i);
    }

    square(arr, n);

    return 0;
}
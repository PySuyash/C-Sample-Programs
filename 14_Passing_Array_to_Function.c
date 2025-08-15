// Passing an array to function and extending it's size.

#include <stdio.h>
#include <stdlib.h>

void extendArray(int* ptr, int n) {
    int* array = (int *)malloc(n*sizeof(int));
    int* arr = array;
    for (int i=0; i<n; i++) {
        *(arr+i) = *(ptr+i);
    }
    char ch;
    printf("\nWant to extend array(y/n): ");
    scanf(" %c", &ch);

    if (ch == 'y') {
        int m;
        printf("\nEnter the number of elements to extend: ");
        scanf("%d", &m);

        array = (int *)realloc(array, (n+m)*sizeof(int));

        printf("\nEnter new elements\n");
        for (int i=n; i<n+m; i++) {
            scanf("%d", arr+i);
        }

        printf("\n\t=== Your Updated Array ===\n");
        for (int i=0; i<n+m; i++) {
            printf("%d\t", *(arr+i));
        }
    } else if (ch == 'n') {
        printf("\n\t OK \n");
        return;
    }
}

int main() {
    int n;

    printf("\nEnter the size of array: ");
    scanf("%d", &n);

    int* arr = (int *)malloc(n*sizeof(int));
    int* ptr = arr;

    printf("\nEnter the elements of array\n");
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\n=== Your Array ===\n");
    for (int i=0; i<n; i++) {
        printf("%d\t", *(ptr+i));
    }

    extendArray(arr, n);

    return 0;
}
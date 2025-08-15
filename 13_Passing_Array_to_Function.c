// Passing array to function and print it

#include <stdio.h>
#include <stdlib.h>

void Print(int* ptr, int n) {
    printf("\t=== Function Called ===\n");
    for (int i=0; i<n; i++) {
        printf("%d\t", *(ptr+i));
    }
    printf("\n\t=== Array Printed ===\t");
}

int main() {
    int n;

    printf("\nEnter the size of array\n");
    scanf("%d", &n);

    int* arr = (int *)malloc(n*sizeof(int));

    printf("\nEnter the elements of array\n");
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    Print(arr, n);

    return 0;
}
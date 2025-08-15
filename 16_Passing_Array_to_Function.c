// Reversing array using function.

#include <stdio.h>
#include <stdlib.h>
 
void reverse(int* ptr, int n) {
    int* array = (int *)malloc(n*sizeof(int));
    int* pttr = array;
    for (int i=0; i<n; i++) {
        *(pttr+i) = *(ptr+i);
    }

    printf("\n=== Reversed Array ===\n");

    for (int i=n-1; i>=0; i--) {
        printf("%d\t", *(pttr + i));
    }
}

int main() {
    int n;

    printf("\nEnter the size of array: ");
    scanf("%d", &n);

    int* arr = (int *)malloc(n * sizeof(int));
    int* ptr = arr;

    printf("\nEnter the elements of array\n");
    for (int i=0; i<n; i++) {
        scanf("%d", ptr+i);
    }

    reverse(arr, n);

    return 0;
}
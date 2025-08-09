// Creating an array, printing array with addresses, and performing arithmatics on array.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void arrayMaths(int *ptr, int n) {
    printf("\nAdding all elements of arrays:\n");
    int add = 0;
    for (int i=0; i<n; i++) {
        add += *(ptr+i);
    }
    printf("\nArray :: Addition\n");
    for (int i=0; i<n; i++) {
        printf("%d ", *(ptr+i));
    }
    printf(" :: %d", add);

    int arr[n];
    printf("\nSquare Array\n");
    for (int i=0; i<n; i++) {
        arr[i] = pow(*(ptr+i), 2);
    }
    
    for (int i=0; i<n; i++) {
        printf("%d\t", arr[i]);
    }
}

int main() {

    int n;

    printf("\nEnter the size of array:\n");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    int *ptr = arr;

    printf("\nEnter the elements of array:\n");
    for (int i=0; i<n; i++) {
        scanf("%d", ptr+i);
    }

    printf("\nArrays : Addresses\n");
    for (int i=0; i<n; i++) {
        printf("%d : %p\n", *(ptr+i), ptr+i);
    }

    char ch;
    printf("\nWant to perform arithmatics on arrays(y/n):");
    scanf(" %c", &ch); // The space tells scanf to skip whitespace, including \n. The newline \n from pressing Enter stays in the input buffer. that's why you need to add space before %c.

    if (ch == 'y') {
        arrayMaths(arr, n);
    } else if (ch == 'n') {
        printf("\tGood Bye\t");
    }

    return 0;
}
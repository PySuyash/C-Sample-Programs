// Creating, printing, modfying element, again printing array using pointers.

#include <stdio.h>
#include <stdlib.h>

void modifyArray(int *ptr, int n) {
    int ele;
    int repl;
    printf("\nEnter the element which you want to modify: \n");
    scanf("%d", &ele);
    printf("\nEnter the element you want to replace with: \n");
    scanf("%d", &repl);

    for (int i=0; i<n; i++) {
        if (*(ptr+i) == ele) {
            *(ptr+i) = repl;
        }
    }

    printf("\nElement %d modified.\n", ele);
    printf("\nYour Modified Array\n");
    for (int i=0; i<n; i++) {
        printf("%d\t", *(ptr+i));
    }

    return;
}

int main() {
    int n;

    printf("\nEnter the size of array: \n");
    scanf("%d", &n);

    int *arr = (int *)malloc(n*sizeof(int));
    int *ptr = arr;

    printf("\nEnter the element of array:\n");
    for (int i=0; i<n; i++) {
        scanf("%d", arr+i);
    }

    printf("\nYour Array:\n");
    for (int i=0; i<n; i++) {
        printf("%d\t", *(arr+i));
    }

    modifyArray(arr, n);

    free(arr);

    return 0;
}
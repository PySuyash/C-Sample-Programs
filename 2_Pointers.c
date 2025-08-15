// Dynamic Array Allocation using Pointers.
#include <stdio.h>
#include <stdlib.h>

int main() {

    char ch = 'y';
    int *arr, size;

    while (ch == 'y') {
        printf("\nEnter the size of Array: ");
        scanf("%d", &size);

        arr = (int *)malloc(size * sizeof(int));

        printf("\nEnter the elements of array: \n");

        for (int i=0; i<size; i++) {
        printf("\nEnter the %d element: ", i+1);
        scanf("%d", &arr[i]);
        }

        printf("\n==Your Array==\n");

        for (int i=0; i<size; i++) {
        printf("%d\n", arr[i]);
        }
 
        printf("Want to allocate another array(y/n): ");
        scanf(" %c", &ch);

        free(arr);
    }

    return 0;
}
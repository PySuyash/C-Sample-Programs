// The second largest and smallest element in array using pointers.
#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;

    printf("\nEnter the size of array: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n*sizeof(int));
    int *ptr = arr;
    
    printf("\nEnter the elements of array\n");
    for (int i=0; i<n; i++) {
        scanf("%d", ptr+i);
    }

    int *min = arr;
    int *max = arr;

    for (int i=0; i<n; i++) {
        if (*(ptr+i) < *min) {
            min = (ptr+i);
        }
        if (*max < *(ptr+i)) {
            max = (ptr+i);
        }
    }

    int *secondMin = NULL;
    int *secondMax = NULL;

    for (int i=0; i<n; i++) {
        if ((secondMin == NULL || *(ptr+i) < *secondMin) && *(ptr+i) != *min) {
            secondMin = (ptr+i);
        }
        if ((secondMax == NULL || *(ptr+i) > *secondMax) && *(ptr+i) != *max) {
            secondMax = (ptr+i);
        }
    }

    printf("Minimum element : %d\n", *min);
    printf("Second minimum element : %d\n", *secondMin);
    printf("Maximum element : %d\n", *max);
    printf("Second maximum element : %d\n", *secondMax);

    return 0;
}
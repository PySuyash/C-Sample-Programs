// creating two arrays dynamically and perform arithmatics using pointers.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;

    printf("\nEnter the size of first array: ");
    scanf("%d", &n);

    int* arr1 = (int *)malloc(n*sizeof(int));
    int* ptr1 = arr1;

    printf("\nEnter the elements of first array\n");
    for (int i=0; i<n; i++) {
        scanf("%d", ptr1+i);
    }

    printf("\nEnter the size of second array: ");
    scanf("%d", &m);

    int* arr2 = (int *)malloc(m*sizeof(int));
    int* ptr2 = arr2;

    printf("\nEnter the elements of first array\n");
    for (int i=0; i<n; i++) {
        scanf("%d", ptr2+i);
    }

    
    if (n == m) {
        printf("\n== Array Elements Addition ==\n");
        int resultant[n];
        for (int i=0; i<n; i++) {
            resultant[i] = *(ptr1+i) + *(ptr2+i);
        }
        printf("\n== Resultant Array ==\n");
        for (int i=0; i<n; i++) {
            printf("%d\t", resultant[i]);
        }
    } else if (n != m) {
        printf("\t== Array elements are not equal ==\n");
        printf("\t== Array size must be reduced ==\t");
        int size = n < m ? n : m;
        int resultant[size];
        for (int i=0; i<size; i++) {
            resultant[i] = *(ptr1 + i) + *(ptr2 + i);
        }
        printf("\n== Resultant Array ==\n");
        for (int i=0; i<size; i++) {
            printf("%d\t", resultant[i]);
        }
    }

    return 0;

}
// Reversing array using pointers.

#include <stdio.h>
#include <stdlib.h>

void reverseArray(int *ptr, int n) {
    int *first = ptr;
    int *last = (ptr+n-1);

    while (first < last) {
        int temp = *first;
        *first = *last;
        *last = temp;

        first ++;
        last --;
    }

    printf("\nReversed Array\n");
    for (int i=0; i<n; i++) {
        printf("%d\t", *(ptr + i));
    }
}

void revPart(int *ptr, int part, char side, int arrSize) {
    int *first, *last;
    if (side == 'l') {
        first = ptr;
        last = (ptr+part-1);
    } else if (side == 'r') {
        first = ptr+(arrSize-part);
        last = (ptr+arrSize-1);
    } else {
        printf("Enter the valid side.");
        return;
    }

    while (first < last) {
        int temp = *first;
        *first = *last;
        *last = temp;

        *first ++;
        *last --;
    }

    printf("\nReversed Array\n");
    for (int i=0; i<arrSize; i++) {
        printf("%d\t", *(ptr + i));
    }
}

int main() {
    int n;

    printf("\nEnter the size of array: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    int *ptr = arr;

    printf("\nEnter the elements of array\n");
    for (int i=0; i<n; i++) {
        scanf("%d", ptr+i);
    }

    char ch;

    printf("Want to reverse the whole array (PRESS: a)\nWant to reverse some part (PRESS: b): ");
    scanf(" %c", &ch);

    if (ch == 'a') {
        reverseArray(arr, n);
    } else if (ch == 'b') {
        char choice;
        int part;
        printf("Enter the reversing part LEFT or RIGHT (l/r): "); 
        scanf(" %c", &choice);
        printf("Enter the size of part to reverse: ");
        scanf("%d", &part);
        
        revPart(arr, part, choice, n);
    }

    return 0;
}
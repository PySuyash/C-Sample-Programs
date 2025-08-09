// Swap two numbers using pointer.

#include <stdio.h>

// function to swap the numbers using pointers.
void swap(int *num1, int *num2) {
    int temp = *num1;       // Actual swapping process.
    *num1 = *num2;
    *num2 = temp;
}

int main() {

    int num1, num2;

    // Taking the two numbers as input from user.
    printf("Enter first number : ");
    scanf("%d", &num1);
    printf("Enter second number : ");
    scanf("%d", &num2);

    // Passing the address of both numbers (Pass by reference).
    swap(&num1, &num2);

    // Displaying swapped numbers.
    printf("After swapping, First number: %d\n", num1);
    printf("After swapping, Second number: %d\n", num2);

    return 0;
}
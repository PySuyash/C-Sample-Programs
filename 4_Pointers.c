// Reversing a string using pointers.

#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    char *first;
    char *second;

    printf("Enter a string: ");
    scanf("%s", string);

    int n = strlen(string);

    first = string;
    second = &string[n - 1];

    while (first < second) {
        char temp = *first;
        *first = *second;
        *second = temp;

        first++;
        second--;
    }

    printf("Reversed String: %s\n", string);

    return 0;
}

#include <stdio.h>

int main() {
    // define variables
    int temp;
    int* temp_ptr;

    // get user input
    printf("Enter integer: ");
    scanf(" %d", &temp);

    // dereference temp
    temp_ptr = &temp;

    printf("%d,\n%d,\n%p,\n%p", temp, *temp_ptr, &temp, temp_ptr);

    return 0;
}
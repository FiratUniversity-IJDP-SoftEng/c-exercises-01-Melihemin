#include <stdio.h>

// Melih Emin KILICOGLU
// Firat University
// C Programming Exercises 01
// Example 1

int main() {
    
    while (1) {
        // read an integer from the user
        int input_value;
        // prompt the user to enter an integer
        printf("Please enter an integer: ");
        scanf("%d", &input_value);
        printf("You entered: %d\n", input_value);

        // check if the entered integer is equal to 3

        if (input_value == 3) {
            printf("Correct value entered!\n");
        } else {
            printf("Incorrect value. Try again pls.\n");
        }
    };
}
#include <stdio.h>

// Melih Emin KILICOGLU
// Firat University
// C Programming Exercises 02
// Example 2

int main() {


    int input_age;
    // get age from user
    printf("Please enter your age: ");
    scanf("%d", &input_age);

    // some control and print "Happy Birthday!" input_age times
    if (input_age > 0) {
        for (int i = 0; i < input_age; i++) {
        printf("Happy Birthday!\n");
    }
    } else {
        printf("You tried smth.\n");
    }


}
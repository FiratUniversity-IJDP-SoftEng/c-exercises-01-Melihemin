#include <stdio.h>

// Melih Emin KILICOGLU
// Firat University
// C Programming Exercises 03

int main() {
    
    printf("Do you have cat or dog? (cat/dog/both): ");

    char pet_type[10];
    scanf("%s", pet_type);

    if ( (pet_type[0] == 'c' && pet_type[1] == 'a' && pet_type[2] == 't' && pet_type[3] == '\0') ) {
        printf("You have a cat!\n");
        printf("Meow Meow!\n");
    } else if ( (pet_type[0] == 'd' && pet_type[1] == 'o' && pet_type[2] == 'g' && pet_type[3] == '\0') ) {
        printf("You have a dog!\n");
        printf("Woof Woof!\n");
    } else if ( (pet_type[0] == 'b' && pet_type[1] == 'o' && pet_type[2] == 't' && pet_type[3] == 'h' && pet_type[4] == '\0') ) {
        printf("You have both cat and dog!\n");
        printf("Meow Meow!\n");
        printf("Woof Woof!\n");
    } else {
        printf("Unknown pet type!\n");
    }
}


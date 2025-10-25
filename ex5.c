#include <stdio.h>
#include <string.h>

// Melih Emin KILICOGLU
// Firat University
// C Programming Exercises 05
// Example 5

void sayHello(char name[10]);

int main() {
    char name[10];

    printf("Type your name\n");
    scanf("%s", name);

    sayHello(name);
    return 0;
}

void sayHello(char name[10]) {
    printf("Hello, %s!\n", name);
}

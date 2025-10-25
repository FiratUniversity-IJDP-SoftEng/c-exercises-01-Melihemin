#include <stdio.h>
#include <string.h>
typedef char* string;

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
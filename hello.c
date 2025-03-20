#include <stdio.h>

int main(void) 
{
    char name[50];
    char lastname[50];
    printf("What's your name? ");
    fgets(name, 50, stdin);
    printf("Hello, %s", name);
    printf("What's your last name? ");
    fgets(lastname, 50, stdin);
    printf("Hello, %s %s", name, lastname);
    return 0;
}



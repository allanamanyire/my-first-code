#include <stdio.h>
#include <string.h>

int main (){

    char name[25]; //bytes
    int age;

    printf("\nWhat is your name?");
    //scanf("%s", &name); // does not read white spaces
    fgets(name, 25, stdin); //reads white spaces
    name[strlen(name)-1] = '\0';// Removes the new line after the string

    printf("\nHow old are you?");
    scanf("%d", &age);
    
    printf("\nHello %s, How are you?", name);
    printf("\nYou are %d years old.", age);

    return 0;

}
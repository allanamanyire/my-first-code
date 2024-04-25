#include <stdio.h>

void birthday(char name[], int age)/*Parameters The variables that are defined 
when the function is declared are known as parameters*/
{


    printf("\nHappy Birthday dear %s", name);   
    printf("\nYou are %d years old!\n", age);
}

int main()
{
    char name[] = "Murungi";
    int age  = 7;

    birthday(name, age);/*Aurguments are the ones in the brackets 
    The values that are declared within a function when the function
     is called are known as an argument*/

    return 0;
 
}
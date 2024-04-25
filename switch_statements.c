#include <stdio.h>

int main(){

    /* Switch is a better alternative to using many else ifs
    allows a value to be tested for equalities againist many cases
    */

char grade;

printf("\nEnter Your grade: ");
scanf("\n%c", &grade);

switch (grade){
    case 'A':
    printf("\nEXECELLENT\n");
    break;

    case 'B':
    printf("\nGOOD\n");
    break;

    case 'C':
    printf("\nFAIR\n");
    break;

    case 'D':
    printf("\nFAILED\n");
    break;

    default:
    printf("\nEnter a VALID grade!\n");

}

/*
if (age >= 18){
    
    printf("\nYou can get a credit card!");
}

else if (age == 0)
{
   printf("\nYou have not yet been born");
}

else {

    printf("\nYou are too young to get a credit card!");

}*/

return 0;

}
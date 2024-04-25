#include <stdio.h>

int main(){

int age;

printf("\nEnter Your Age: ");
scanf("\n%d", &age);

if (age >= 18){
    
    printf("\nYou are ligible to be issued a credit card");
}

else if (age == 0)
{
   printf("\nYou have not yet been born");
}

else {

    printf("\nYou are too young to be issued a credit card!");

}

return 0;

}
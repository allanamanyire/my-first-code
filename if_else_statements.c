#include <stdio.h>

int main(){

int age;

printf("\nEnter Your Age: ");
scanf("\n%d", &age);

if (age >= 18){
    
    printf("\nYou can get a credit card!");
}

else {

    printf("\nYou are too young to get a credit card!");

}

return 0;

}
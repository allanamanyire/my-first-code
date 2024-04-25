#include <stdio.h>
#include <stdbool.h>

int main(){

    //logical operators = && (AND) Checks if two or more conditions are TRUE

    float temp;
    bool sunny;

    temp = 25;
    sunny = true;

    if (temp >= 0 && temp <= 30 && sunny == true){

        printf("\nThe weather is good!");
    }

    else{
        printf("\nThe weather is bad!");
    }


 return 0;
 
}
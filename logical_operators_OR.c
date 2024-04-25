#include <stdio.h>
#include <stdbool.h>

int main(){

    //logical operators: OR (||) Checks if at least 1 (ONE) condition is TRUE

    float temp;
    bool sunny;

    temp = 1000;
    sunny = false;

    if (temp >= 0 || temp <= 30 || sunny == false){// condition 1 is false, condition 2 is false but condition 3 is true

        printf("\nThe weather is good!");
    }

    else{
        printf("\nThe weather is bad!");
    }


 return 0;
 
}
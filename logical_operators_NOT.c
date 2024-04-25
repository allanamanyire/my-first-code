#include <stdio.h>
#include <stdbool.h>

int main(){

    //logical operators: NOT (!) reverses a condition

    float temp;
    bool sunny;

    temp = 25;
    sunny = true;

    if (!sunny) {

        printf("\nIt is sunny outside!");
    }

    else{
        printf("\nIt is cloudy outside!");
    }

 return 0;
 
}
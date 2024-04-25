#include <stdio.h>
#include <ctype.h> // this import has many string functions

int main(){

char unit;
float temp;

printf("\nIs the Temp in C or F? ");
scanf("\n%c", &unit);
 
unit = toupper(unit);// removing case sensitivity

if ( unit == 'C'){
    printf("\nEnter temperature in Celicius ");
    scanf("\n%f", &temp);
    temp = (temp * 9 / 5) + 32;
    printf("\nThe temp in Farenheit is %.1lf", temp);
}

else if (unit == 'F')
{
    printf("\nEnter temperature in Farenheit ");
    scanf("\n%f", &temp);
    temp = ((temp - 32) * 5) / 9;
    printf("\nThe temp in Celicius is %.1lf", temp);
}

else {

    printf("\nYour imput is invalid!");

}

return 0;

}
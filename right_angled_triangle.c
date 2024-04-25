#include <stdio.h>
#include <math.h>

int main(){

double a;
double b;

printf("\nEnter the value of side a: ");
scanf("\n%lf", &a);

printf("\nEnter the value of side b: ");
scanf("\n%lf", &b);

double c = sqrt((a*a)+(b*b));

printf("The length of side c is %.1lf", c);

return 0;

}
#include <stdio.h>
#include <math.h>

int main (){

    double a = sqrt(9);;
    double b = pow(2, 4);
    int c = round(3.14);
    int d = ceil(3.14); // round up
    int e = floor(3.14); // round down
    double f = fabs(-100); // absolute value of a number 
    double g = log(45);
    double h  = sin(45);
    double i = cos(45);
    double j = tan(45);

    printf("\n%lf", a);
    printf("\n%lf", b);
    printf("\n%d", c);
    printf("\n%d", d);
    printf("\n%d", e);
    printf("\n%lf", f);
    printf("\n%lf", g);
    printf("\n%lf", h);
    printf("\n%lf", i);
    printf("\n%lf", j);

    return 0;

}
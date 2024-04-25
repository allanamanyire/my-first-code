#include <stdio.h>

int main (){

    const double PI = 3.14;
    double radius;
    double circumference;
    double area;
    
    printf("\nEnter the Radius of the Circle: ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("\nThe Circumference of the the Circle is %lf", circumference);
    printf("\nThe Area of the Circle is %lf", area);

    return 0;

}
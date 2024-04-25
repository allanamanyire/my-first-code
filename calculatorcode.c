#include <stdio.h>

int main(){
    char operator;
    double num1;
    double num2;
    double results;

    printf("\nEnter Operation (+ - * /): ");
    scanf("%c", &operator);

    printf("\nEnter Number 1: ");
    scanf("\n%lf", &num1);

    printf("\nEnter Number 2: ");
    scanf("\n%lf", &num2);


switch (operator){
    case '+':
        results = num1 + num2;
        printf("\nResult: %.2lf", results);
    break;

    case '-':
        results = num1 - num2;
        printf("\nResult: %.2lf", results);
    break;

    case '*':
        results = num1 * num2;
        printf("\nResult: %.2lf", results);
    break;

    case '/':
        results = num1 / num2;
        printf("\nResult: %.2lf", results);
    break;

    default:
        printf("\n%c is not valid", operator);
        break;
        
    }
 return 0;
 
}
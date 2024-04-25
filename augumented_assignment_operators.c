#include <stdio.h>
int main (){
    /* Augmented Assignment Operators: Used to replace a statement
    where an operator takes a variable as one of its argumnets
    and then assigns the result back to the same variable
    x=x+1
    x+=1

    */
    

    //EXAMPLE

    int x = 10;

    //x = x+2;
    //x+=2;

    //x = x-2;
    //x-=2;

    //x = x*2;
    //x*=2;

    //x = x/2;
    //x/=2;

    //x = x%2;
    x%=2;

    printf("%d\n", x);

    return 0;

}
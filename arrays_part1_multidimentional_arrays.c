#include <stdio.h>
#define N 10 /*MICROS*/

int main(){

    int a[5];
    int i;

    printf("\nEnter the Element of an Array:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    

    return 0;
}
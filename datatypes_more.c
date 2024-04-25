#include <stdio.h>
#include <stdbool.h>
int main (){
    int a = 36; // %d
    float b = 9.999999; // %f
    char c = 'B';
    char d[] = "Amanyire Allan";
    long long int e = 52858568415545220;
    bool f = 5%2;

    printf("%d\n", a);
    printf("%f\n", b);
    printf("%c\n", c);
    printf("%s\n", d);
    printf("%lld\n", e);
    printf("%d\n", f);


    return 0;

}
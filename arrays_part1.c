#include <stdio.h>

int main(){
   int a[] = {1, 2, 3, 4, 5};
   int i;

   for(i = 0; i < 4; i++){
      printf("a[%d]: %d \t Address: %d\n", i, a[i], &a[i]);
   }
   return 0;
}
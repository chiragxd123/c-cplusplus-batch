#include <stdio.h>

int main() {
   int i = 0;  

   do {
      if(i % 2 == 0) {
         printf("%d ", i);
      }
      i++;
      if(i > 10) {
         break;
      }
   } while(1);

   return 0;
}

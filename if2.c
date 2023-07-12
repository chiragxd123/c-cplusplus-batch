#include <stdio.h>

int main() {
   int a ;
   int b ;
   int c;
printf("Enter 3 number:");
scanf("%d %d %d",&a,&b,&c);
   // Using logical AND operator
   if (a > b && a > c) {
      printf("%d is the largest number\n",a,b,c);
   }

   // Using logical OR operator
   if (b > a || b > c) {
      printf("%d is greater than at least one of the other numbers\n",b,a,c);
   }
   else 
 {
    printf("%d is Short",b);
   }

   // Using logical NOT operator
   if (a != b) {
      printf("a is not equal to b\n");
   }
   else if (a == b)
   {
    printf("A and B is Equal");
   }

   return 0;
}

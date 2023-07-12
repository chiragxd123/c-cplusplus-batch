// * 
// * *
// * * *
// * * * *
// * * * * *

//      *
//     * *
//    * * *
//   * * * *
//  * * * * *
#include<stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)  //rows
    {
          for (int j = 5; j >=i; j--)  
          {
           printf(" ");   //space
          }

          for (int k = 1; k <=i; k++) //columns
          {
            printf("* "); 
          }
          
        printf("\n");  
    }
    return 0;
}
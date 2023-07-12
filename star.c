#include<stdio.h>

int main(){
    for (int  i = 1; i <= 5; i++)  //Rows
    { 
        for (int j = 1; j <= i; j++) //Columns    
        {
            printf("* ");
        }
        printf("\n");
    }
        // *
        // * *
        // * * *
      for (int  i = 1; i <= 5; i++)  //Rows
    {
        for (int j = 5; j >= i; j--) //Columns
        {
            printf("* ");
        }
        printf("\n");
    }
    // * * *
    // * *
    // * 
      for (int  i = 1; i <= 5; i++)  //Rows
    {
        for (int j = i; j <= 5; j++) //Space
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) // columns
        {
            printf("*");
        }
        
        printf("\n");
    }
//      *
//     **
//    ***
//   ****
//  *****
    return 0;

}
#include<stdio.h>

int main()
{
    int i =0; //iterator or counter
    int n;

    // FOR LOOP
    // for(i=1; i<=10; i++){
    //     printf("*\n",i);
        //    sum = sum + i;
    // }
    // printf("sum is %d \n",sum);

    // WHILE LOOP
    printf("enter a number:");
    scanf("%d",&n);
    while(i<n){
        printf("Hello World\n");
        i=i+1;
    }

    // DO WHILE
         do
         {
            printf("Hello World")
         } while (/* condition */);
         
    return 0;
    //print a to z A to Z and Float
    
}
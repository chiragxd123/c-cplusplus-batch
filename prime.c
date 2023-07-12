#include<stdio.h>
int main()

{
    int i,n;
    int con=0;
    printf("enter a number:");
    scanf("%d",&n);

    for ( i = 2; i <= n; i++)
    {
       if (n % i==0)
       {
          con++;
       }
          
    }
    if (con==1){
       
       printf("it is prime number");
    }
       else{
        printf("Not prime number");
       } 
    return 0;
}
// #include<stdio.h>
// int main()
// {
// int n,i;
// printf("\nEnter the number : ");
// scanf("%d",&n);
// for(i = 2; i <= n/2; i++)
// {
// if(n % i ==0)
// {
// break;
// }
// }
// if(i > n/2)
// printf("\n%d is a Prime Number\n",n);
// else
// printf("\n%d is not a Prime Number\n", n);
// return 0;
// }
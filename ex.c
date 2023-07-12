#include<stdio.h>
int main()
{
    int n,con=0;
    printf("Enter a number:");
    scanf("%d",&n);
       
       for( int i=1; i<=n; i++){
            if(n%i==0){
                con++;
            }
       }
       if(con==2){
        printf("Number is Prime");
       }
       else{
        printf("Not Prime");
       }
    return 0;
}
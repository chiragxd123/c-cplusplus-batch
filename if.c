#include<stdio.h>
int main()
{
    int a;
    int b;
    printf("Enter two Numbers:");
    scanf("%d %d",&a,&b);
  
     if ( a > 10)
     {
        printf("%d",a+b);
     }
     else if( a < 0){
        printf("%d",a-b);
     }
     else if(b > 100){
        printf("%d",a*b);
     }
     else{
        printf("Yo!!");
     }

    //  int a = 'A';
    //  printf("%d",a);
    return 0;
}
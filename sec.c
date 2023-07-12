#include<stdio.h>

int main()
{
int num = 10;
printf("The Value of num is %d\n", num);
// Output: The value of num is 10

float pi = 3.14159;
printf("The value of pi is %.3f\n", pi);
// Output: The value of pi is 3.141590

char letter = 'A';
printf("The letter is %c\n", letter);
// Output: The letter is A

char name[] = "John";
printf("Hello, my name is %s\n", name);
// Output: Hello, my name is John

int* pointer = &num;
printf("The memory address of num is %p\n", pointer);
// Output: The memory address of num is 0x7ffd5fbff8cc
}
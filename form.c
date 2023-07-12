#include <stdio.h>

int main() {
    int num = 42;
    float pi = 3.14159;
    char letter = 'A';
    char name[] = "Alice";
    int *ptr = &num;
    
    printf("The value of num is: %d\n", num);
    printf("The value of pi is: %f\n", pi);
    printf("The first letter of the alphabet is: %c\n", letter);
    printf("Hello, my name is %s\n", name);
    printf("The address of num is: %p\n", ptr);

    return 0;
}

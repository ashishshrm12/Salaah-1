#include<stdio.h>
int main()
{
    int a=100;
    int *ptr=&a;
    int *ptr2=NULL;

    printf("The address of pointer to a is: %p\n", &ptr);
    printf("The value of a is: %d\n", *ptr);
    printf("The address of a is: %p\n", ptr);
    printf("The address of a is: %p\n", &a);
    printf("The value of a is: %d\n", a);
    printf("The address of some garbege value is: ", ptr2);
}
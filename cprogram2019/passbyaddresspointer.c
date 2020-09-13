//pass by address of pointer
#include<stdio.h>
#include<stdlib.h>
void fun(int *);
int main()
{
int a=10;
fun(&a);
printf("After calling the fun %d\n",a);
}
void fun(int *a)
    {
    *a=*a+2;
    }

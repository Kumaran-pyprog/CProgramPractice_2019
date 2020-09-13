#include<stdio.h>
#include<string.h>
void (*p)(int);
void fun(int a)
{
printf("a=%u\n",a);
}
int main()
{
printf("main=%u\n",main);
p=fun;
p(5);
}

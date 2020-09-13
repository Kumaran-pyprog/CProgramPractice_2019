#include<stdio.h>
#include<string.h>
int main()
{
fun(fun(),fun());
printf("%d\n",fun());//Ans:2
}
int fun()
{
static int a=10;
a=a-2;
return a;
}

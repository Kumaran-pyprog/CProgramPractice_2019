//recursion function
#include<stdio.h>
#include<stdlib.h>
int fun(int n)
{
if(n==0)
    {
    return 0;
    }
fun(n-1);
printf("n=%d\n",n);
}
int main()
{
int a=5;
fun(a);
}

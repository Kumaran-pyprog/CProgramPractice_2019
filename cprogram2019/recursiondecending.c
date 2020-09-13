//recursion function
#include<stdio.h>
#include<stdlib.h>
int fun(int n)
    {
     if(n==0)
        {
        return 0;
        }
     printf("n=%d\n",n);
     fun(n-1);
    }
int main()
{
int a=10;
fun(a);
}

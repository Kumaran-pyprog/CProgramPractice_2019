//recursion function
#include<stdio.h>
#include<stdlib.h>
int fact(int n)
    {
    if(n==0)
        {
        return 1;
        }
    return n*fact(n-1);
    }
int main()
{
int a;
printf("Enter the val of a:\n");
scanf("%d",&a);
int res=fact(a);
printf("a val %d--->%d\n",a,res);
}

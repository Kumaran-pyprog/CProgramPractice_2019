//factorial program using recursion function
#include<stdio.h>
#include<stdlib.h>
int factfunc(int);
int main()
{
int n,f;
printf("Enter the num:\n");
scanf("%d",&n);
f=factfunc(n);
printf("Factorial val of %d=%d",n,f);
}
int factfunc(int num)
{
if(num==0)
    {
    return 1;
    }
else
    {
    return num*factfunc(num-1);
    }
}

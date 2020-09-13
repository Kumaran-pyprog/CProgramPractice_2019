//print factorial using function
#include<stdio.h>
#include<stdlib.h>
int factfunc(int);//prototype declaration
int main()
{
int n,f;
printf("Enter the number:\n");
scanf("%d",&n);
f=factfunc(n);//actual parameters
printf("factorial of %d=%d\n",n,f);
}
int factfunc(int x)//formal parameters
{
int fact =1,i;
for(i=1;i<=x;i++)
    {
    fact=fact*i;
    }
return fact;

}

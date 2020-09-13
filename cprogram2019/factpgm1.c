//Multifile compilation
#include<stdio.h>
int factorial(int);
int main()
{
int num,res;
printf("Enter the num:\n");
scanf("%d",&num);
res=factorial(num);
printf("factorial of %d is %d\n",num,res);
}
int factorial(int n)
{
int i,fact=1;
for(i=1;i<=n;i++)
    {
    fact=fact*i;
    }
return fact;
}

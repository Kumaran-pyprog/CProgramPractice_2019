//print the factorial of the given number
#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,i,fact=1;
printf("Enter the num:\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
    {
    fact=fact*(i);
    }
    printf("Factorial of %d =%d\n ",n,fact);
}
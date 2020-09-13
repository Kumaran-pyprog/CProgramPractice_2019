//print the factorial of the given number
#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,i=1,fact=1;
printf("Enter the num:\n");
scanf("%d",&n);
while(i<=n)
    {
    fact=fact*(i);
    i++;
    }
    printf("Factorial of %d =%d\n ",n,fact);
}

//Write a factorial program using while loop
#include<stdio.h>
int main()
{
int num=0,fact=1;
printf("Enter the number:\n");
scanf("%d",&num);
while(num>0)
    {
    fact=fact*num;
    --num;
    }
printf("Factorial of %d is %d\n",num,fact);
}

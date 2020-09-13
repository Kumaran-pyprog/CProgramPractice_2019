#include<stdio.h>
int main()
{
int a,b;
printf("Enter the value of a,b:\n");
scanf("%d%d",&a,&b);
if(a%3==0&&b%3==0)
    {
    printf("Both are divisible");
    }
else if(a%3==0)
    {
    printf("a is divisible");
    }
else if(b%3==0)
    {
    printf("b is divisible");
    }
else
    {
    printf("Both are not divisible");
    }

}

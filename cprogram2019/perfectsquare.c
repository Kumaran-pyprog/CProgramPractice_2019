//perfect square
#include<stdio.h>
#include<math.h>
int main()
{
int a;
float num;
printf("Enter the value of a:\n");
scanf("%d",&a);
num=sqrt(a);
if(num -(int)num==0.0f)
    {
    printf("%d is perfect square",a);
    }
else
    {
    printf("%d is not perfect square",a);
    }
}

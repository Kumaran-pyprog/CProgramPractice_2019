//swap two variable without using third variable
#include<stdio.h>
int main()
{
int a,b;
printf("Enter the value of a,b:\n ");
scanf("%d%d",&a,&b);
printf("Before swap a is %d,b is %d\n",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("After swap a is %d ,b is %d\n",a,b);
}

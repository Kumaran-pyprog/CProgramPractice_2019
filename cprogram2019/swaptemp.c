//swap two variable using temp variable
#include<stdio.h>
int main()
{
int a,b,temp;
printf("Enter the value of a,b:\n ");
scanf("%d%d",&a,&b);
printf("Before swap a is %d,b is %d\n",a,b);
temp=a;
a=b;
b=temp;
printf("After swap a is %d ,b is %d\n",a,b);
}

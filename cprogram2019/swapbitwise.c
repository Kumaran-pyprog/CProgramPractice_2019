//swap two variable using bitwise operator
#include<stdio.h>
int main()
{
int a,b;
printf("Enter the variable a,b:\n");
scanf("%d%d",&a,&b);
a=a^b;
b=a^b;
a=a^b;
printf("After swap a is %d,b is %d\n",a,b);
}

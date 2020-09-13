//swap two number using function
#include<stdio.h>
void swapnum(int,int);
int main()
{
int a,b;
printf("Enter the num a,b:\n");
scanf("%d%d",&a,&b);
printf("Before swap a is %d,b is %d\n",a,b);
swapnum(a,b);
}
void swapnum(int a, int b)
{
int t;
t=a;
a=b;
b=t;
printf("After swap a is %d,b is %d\n",a,b);
}

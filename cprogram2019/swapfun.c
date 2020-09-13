//swap two variable using function
#include<stdio.h>
void swap(int*,int*);
int main()
{
int a,b;
printf("Enter the value of a,b:\n");
scanf("%d%d",&a,&b);
printf("Before swap a is %d,b is %d\n",a,b);
swap(&a,&b);
printf("After swap a is %d,b is %d\n",a,b);
}
void swap(int *x,int *y)
{
int temp;
temp=*x;
*x=*y;
*y=temp;
}

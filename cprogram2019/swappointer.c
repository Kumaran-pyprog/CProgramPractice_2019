//swap two variable using pointer
#include<stdio.h>
int main()
{
int *a,*b,x,y,temp;
printf("Enter the value x,y:\n");
scanf("%d%d",&x,&y);
a=&x;
b=&y;
temp=*a;
*a=*b;
*b=temp;
printf("After swapping x is %d,y is %d",x,y);
}

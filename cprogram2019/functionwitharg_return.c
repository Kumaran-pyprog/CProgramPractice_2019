//Function declaration
#include<stdio.h>
int add(int,int);
int main()
{
int a,b,n;
printf("Enter the val a,b:\n");
scanf("%d%d",&a,&b);
n=add(a,b);
printf("sum val is %d",n);
}
int add(int x,int y)
    {
     int sum=x+y;
     return sum;
    }

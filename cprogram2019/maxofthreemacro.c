//Max of three num
#include<stdio.h>
#define MAX(a,b) max=(a>b)?a:b;
int main()
{
int a,b,c,max,x;
printf("Enter the value of a,b,c:\n");
scanf("%d%d",&a,&b);
x=MAX(a,b);
printf("Max val is %d",x);
}

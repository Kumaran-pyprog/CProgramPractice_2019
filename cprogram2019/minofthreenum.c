//Find the smallest of three number
#include<stdio.h>
int main()
{
int a,b,c,max,max2;
printf("Enter the number a,b,c:\n");
scanf("%d%d%d",&a,&b,&c);
max=(a<b?a:b);
max2=(max<c?max:c);
printf("Min value of three num is %d\n",max2);
}

//Ternary operator
#include<stdio.h>
int main()
{
int a,b,c,x1,x2;
printf("Enter the a,b val:\n");
scanf("%d%d%d",&a,&b,&c);
x1=(a>b?a:b);
x2=((a>b)&&(a>c)?:(b>c)?b:c);
printf("output of x val is %d\n",x1);
printf("output of x2 val is %d\n",x2);
}

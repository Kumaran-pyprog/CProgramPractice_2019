//swapnum using macros
#include<stdio.h>
#define SWAP(a,b)t=a;a=b;b=t;
int main()
{
int a,b,t;
printf("Enter the val of a,b:\n");
scanf("%d%d",&a,&b);
printf("Before swap a is %d,b is %d\n",a,b);
SWAP(a,b);
printf("After swap a is %d, b is %d\n",a,b);
}

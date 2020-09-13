#include<stdio.h>
int addval(void);
int main()
{
int x2;
x2=addval();
printf("output val is %d\n",x2);
}
int addval(void)
{
int x,y;
printf("Enter the val x,y:\n");
scanf("%d%d",&x,&y);
return x+y;
}

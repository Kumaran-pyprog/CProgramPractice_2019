//Function with no arguments and no return value
#include<stdio.h>
void add(void);
int main()
{
printf("After calling the function\n");
add();
}
void add(void)
{
int a,b,c;
printf("Enter te val of a,b:\n");
scanf("%d%d",&a,&b);
c=a+b;
printf("output of c is %d\n",c);
}

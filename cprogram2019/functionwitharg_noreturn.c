//Function with argument and no return type
#include<stdio.h>
void addval(int,int);
int main()
{
int a,b,c;
printf("Enter the val of a,b:\n");
scanf("%d%d",&a,&b);
addval(a,b);

}
void addval(int x,int y)
{
int c=x+y;
printf("c val is %d\n",c);
}

#include<stdio.h>
#include<string.h>
int main()
{
char str[]="hello";
char *ptr=str;
printf("%c\n",++*ptr);//Ans:i
}

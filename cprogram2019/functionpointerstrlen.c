//function pointer -string length
#include<stdio.h>
#include<string.h>
void (*p)(int);
int main()
{
char src[100];
printf("Enter the string:\n");
gets(src);
p=strlen(src);
printf("string length is %d\n",p);
}

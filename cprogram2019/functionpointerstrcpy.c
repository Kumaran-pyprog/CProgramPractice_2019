//function pointer -string length
#include<stdio.h>
#include<string.h>
void (*p)(char *,char *);
int main()
{
char src[100],dest[100],res;
printf("Enter the string:\n");
gets(src);
p=strcpy(dest,src);
printf("copy of the string is %s\n",p);


}

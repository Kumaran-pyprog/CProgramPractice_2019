#include<stdio.h>
#include<string.h>
void (*p)(char *,char *);
int main()
{
char src[100],dest[100];
printf("Enter the char:\n");
gets(src);
printf("Enter the char:\n");
gets(dest);
p=strcat(src,dest);
printf("strcat val is %s\n",p);

}

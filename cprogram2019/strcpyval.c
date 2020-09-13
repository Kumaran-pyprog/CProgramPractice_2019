//strcpy()
#include<stdio.h>
#include<string.h>
int main()
{
char src[100],dest[100];
printf("Enter the string:\n");
gets(src);
strcpy(dest,src);
printf("dest val  is %s\n",dest);
}

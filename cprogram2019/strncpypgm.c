//strncpy(dest,src,3)
#include<stdio.h>
#include<string.h>
int main()
{
char dest[100],src[100];
printf("Enter the src:\n");
gets(src);
strncpy(dest,src,5);
printf("copied dest val is %s\n",dest);
}

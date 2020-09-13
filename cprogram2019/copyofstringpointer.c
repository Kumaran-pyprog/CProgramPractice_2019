//mystrcopy
#include<stdio.h>
#include<string.h>
void mystrcopy(char *,char *);
int main()
{
char src[100],dest[100];
printf("Enter the string:\n");
gets(src);
mystrcopy(dest,src);
printf("copy of str val is %s\n",dest);
}
void mystrcopy(char *dest,char *src)
    {
    while(*src!='\0')
        {
        *dest=*src;
         dest++;
         src++;
        }
        *dest!='\0';
    }

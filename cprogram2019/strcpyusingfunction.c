//strcpy() using function
#include<stdio.h>
#include<string.h>
void mystrcpy(char [],char []);
int main()
{
char src[100],dest[100];
printf("Enter the string:\n");
gets(src);
mystrcpy(dest,src);
printf("After copy of string is %s\n",dest);
}
void mystrcpy(char dest[],char src[])
    {
    int i=0;
    while(src[i]!='\0')
        {
        dest[i]=src[i];
        i++;
        }
    dest[i]!='\0';
    }

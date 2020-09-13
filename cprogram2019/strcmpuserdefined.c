//strcmp userdefined function
#include<stdio.h>
#include<string.h>
int mystrcmp(char [],char []);
int main()
{
char str1[100],str2[100];
printf("Enter the str1:\n");
gets(str1);
printf("Enter the str2:\n");
gets(str2);
int i = mystrcmp(str1,str2);
if(i==0)
    {
    printf("Both strings are equal\n");
    }
else
    {
    printf("Both the strings are not equal\n");
    }
}
int mystrcmp(char str1[],char str2[])
    {
    int i=0;
    while(str1[i]!='\0' || str2[i]!='\0')
        {
        if(str1[i]!=str2[i])
            {
            return str1[i]-str2[i];
            i++;
            }
        else if(str1[i]=str2[i])
            {
            return str1[i]-str2[i];
            i++;
            }
        }
    }

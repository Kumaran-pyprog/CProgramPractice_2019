//frequency of character no of occurance
#include<stdio.h>
#include<string.h>
int main()
{
int i,count=0;
char str[80],ch;
printf("Enter the string:\n");
gets(str);
printf("Enter the character:\n");
scanf("%c",&ch);
for(i=0;i<strlen(str);i++)
    {
    if(ch == str[i])
        {
        count++;
        }
    }
printf("The no of occurance is %c= %d\n",ch,count);

}

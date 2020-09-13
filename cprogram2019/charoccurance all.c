//Frequency of character
//frequency of character no of occurance
#include<stdio.h>
#include<string.h>
int main()
{
int i,j,count;
char str[80],ch;
printf("Enter the string:\n");
gets(str);
printf("The no of occurance is:\n");
for(i=0;i<strlen(str);i++)
    {
    count=0;
    for(j=0;j<strlen(str);j++)
        {
            if(str[j] == str[i])
                {
                count++;
                }
        }
        printf("%c = %d\n",str[i],count);
    }


}

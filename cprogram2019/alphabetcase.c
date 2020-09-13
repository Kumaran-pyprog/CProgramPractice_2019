#include<stdio.h>
int main()
{
char ch;
printf("Enter the char:\n");
scanf("%c",&ch);
if(ch>='a'&&ch<='z')
    {
    printf("Alphabet is lowercase");
    }
else if(ch>='A'&&ch<='Z')
    {
    printf("Alphabet is uppercase");
    }

else
    {
    printf("Constant value");
    }
}

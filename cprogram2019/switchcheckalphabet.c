//check whether given input is alphaphet or not?
#include<stdio.h>
int main()
{
char ch;
printf("Enter the char:\n");
scanf("%c",&ch);
if(ch>='A' && ch<='Z'||ch>='a' && ch<='z')
switch(ch)
    {
            default:
                    printf("Entered char is constant");
                    break;

     case 'A'...'Z':
                    printf("Uppercase Alphabet");
                    break;
     case 'a'...'z':
                   printf("Lowercase Alphabet");
                   break;
    }
}

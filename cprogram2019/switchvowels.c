//Check Entered value is vowels or not using switch case
#include<stdio.h>
int main()
{
char ch;
printf("Enter the vowels char:\n");
scanf("%c",&ch);
switch(ch)
    {
     default:
           printf("Enter char is constant");
           break;
     case 'a':
     case 'e':
     case 'i':
     case 'o':
     case 'u':
     case 'A':
     case 'E':
     case 'I':
     case 'O':
     case 'U':printf("Entered char is vowels");
              break;
    }
}

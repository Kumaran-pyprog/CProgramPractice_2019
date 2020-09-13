#include<stdio.h>
int main()
{
char ch,lowervowels,uppervowels;
printf("Enter the vowel character:\n");
scanf("%c",&ch);
lowervowels=(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
uppervowels=(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
if(lowervowels||uppervowels)
    {
     printf("%c is vowels",ch);
    }
else
    {
    printf("%c is Constant",ch);
    }

}

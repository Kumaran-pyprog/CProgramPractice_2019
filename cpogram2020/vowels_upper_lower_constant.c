#include<stdio.h>
int main(){
    char ch;
    printf("Enter the char: ");
    scanf("%c",&ch);
    if((ch>='A')&&(ch<='Z'))
        {
        printf("%c is Upper case letter\n",ch);
        }
    else if(ch>='a'&& ch<='z'){
        printf("%c is lower case letter\n",ch);
        }
    else{
        printf("%c is constant\n",ch);
        }

}

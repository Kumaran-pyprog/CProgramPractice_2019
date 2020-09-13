#include<stdio.h>
int main(){
    char ch;
    printf("Enter the char:");
    scanf("%c",&ch);
    if(((ch>='A')&&(ch<='z'))||((ch>='a')&&(ch<='z'))){
            if((ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U')||(ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')){
                printf("%c is vowels letter\n",ch);
            }
            else{
                printf("%c is not a vowel letter\n",ch);
                }
    }
}


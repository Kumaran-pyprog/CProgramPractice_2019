#include<stdio.h>
int main(){
    char ch;
    printf("Enter the char:");
    scanf("%d",&ch);
    if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z')){
        switch(ch){
            case 'A' ... 'Z':
                printf("Upper case letter");
                break;
            case 'a'...'z':
                printf("lower case letter");
                break;
            default:
                printf("Invalid char!!!");
                break;

                }
    }

}

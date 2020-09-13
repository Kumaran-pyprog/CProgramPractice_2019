#include<stdio.h>
int main(){
    int num;
    printf("Enter the num:\n");
    scanf("%d",&num);
    if(num%2==0){
        printf("%d is Even num",num);
    }
    else{
        printf("%d is odd num",num);
    }

}

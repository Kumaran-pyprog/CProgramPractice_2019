#include<stdio.h>
int main(){
    int num, count=0;
    printf("Enter the num:");
    while(count<num){
            scanf("%d",&num);
            if(num<0){
                printf("Error!!!.You Entered %d negative number.Enter the positive number\n",num);
                continue;
            }
            count++;
    }
     printf("positive num counts are %d\n",count);
}


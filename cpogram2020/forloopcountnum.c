#include<stdio.h>
int main(){
    int count=0,num;
    printf("Enter the num:");
    for(count=0;count<num;){
            scanf("%d",&num);
            if(num<0){
                printf("Error!!!.You Entered %d Negative num\n",num);
                continue;
            }
            count++;
    }
    printf("positive nums are %d\n",count);
}

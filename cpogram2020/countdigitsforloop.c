//count number of digits using forloop
#include<stdio.h>
int main(){
    int num,count;
    printf("Enter the num:");
    scanf("%d",&num);
    for(count=0;num!=0;count++){
        num=num/10;
    }
    printf("The number of digits %d\n",count);
}

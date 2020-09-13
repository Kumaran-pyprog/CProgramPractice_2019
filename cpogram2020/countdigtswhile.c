//count the nume of digits using while and do  while for loop
#include<stdio.h>
int main(){
    int count=0,num;
    printf("Enter the num:");
    scanf("%d",&num);
    while(num>0){
        count ++;
        num=num/10;
    }
    printf("the number of digits is %d\n",count);
}

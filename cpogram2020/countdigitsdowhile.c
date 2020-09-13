//count the number of digits using do while loop
#include<stdio.h>
int main(){
    int num,count=0;
    printf("Enter the num:");
    scanf("%d",&num);
    do{
        count++;
        num=num/10;
    }while(num>0);
    printf("The number of digits is %d\n",count);
}

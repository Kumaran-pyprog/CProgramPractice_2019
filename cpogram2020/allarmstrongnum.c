#include<stdio.h>
#include<stdlib.h>
#define MAX1 1
#define MAX2 10000
int main(){

    int num;
    printf("Range of num from %d to %d\n",MAX1,MAX2);
    for(int i=MAX1;i<=MAX2;i++){
        num=i;
        int sum=0,rem=0;
        while(num>0){
                rem=num%10;
                sum+=rem*rem*rem;
                num=num/10;
        }
        if (sum==i){
            printf("%d is an armstrong num \n",i);
        }

    }


}

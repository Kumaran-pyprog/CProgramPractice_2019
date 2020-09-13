#include<stdio.h>
#include<stdlib.h>
#define MAX1 1111
#define MAX2 2222

int main(){
    int num;
    printf("Range of num from %d to %d\n",MAX1,MAX2);
    for(int i=MAX1;i<=MAX2;i++){
        int rem=0,sum=0;
        num=i;
        while(num>0){
            rem=num%10;
            sum+=rem;
            num=num/10;
        }
        printf("%d sum of digits %d\n",i,sum);
    }
}

#include<stdio.h>
void primenum(int);
int main(){
    int num,val;
    printf("Enter the num:");
    scanf("%d",&num);
    printf("Prime nums are:");
    primenum(num);

}
void primenum(int num){
    int i,j,count;
    for(i=1;i<=num;i++){
        count=0;
        for(j=1;j<=num;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==2){
            printf("%d ",i);
        }

    }

}

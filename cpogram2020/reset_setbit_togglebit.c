#include<stdio.h>
int main(){
    int num1,num2,num3,pos1,pos2,pos3,res1,res2,res3;
    printf("Enter the num1,num2,num3:");
    scanf("%d%d%d",&num1,&num2,&num3);
    printf("Enter the pos1,pos2,pos3:");
    scanf("%d%d%d",&pos1,&pos2,&pos3);
    //setbit
    res1=num1|(1<<pos1);
    printf("set bit val %d\n",res1);
    //togglebit
    res3=num2^(1<<pos2);
    printf("toggle bit val %d\n",res2);
    //resetbit
    res3=num3&~(1<<pos3);
    printf("reset bit val %d\n",res3);

}

#include<stdio.h>
int main(){
    int a=2;
    switch(a){
        case 1:
            printf("case1");
            break;
        case 1+1:
            printf("case2");
            break;
        default:
            printf("halt");
            break;


    }
}

#include<stdio.h>
int main(){
    int n,i=0;
    printf("Enter the n val:");
    scanf("%d",&n);

    do{
        printf("%d ",i);
        if (i==5){
            break;
        }
        i=i+1;
    }while(i<=n);
}

#include<stdio.h>
int main(){
    int num,i,j;
    printf("Enter the num:");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
            printf(" ");
            for(j=1;j<i+1;j++){
                printf("%d",j);
        }
        printf("\n");
    }

}


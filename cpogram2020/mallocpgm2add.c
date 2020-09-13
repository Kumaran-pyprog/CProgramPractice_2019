#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr,a,b,i,sum=0;
    ptr=(int*)malloc(5*sizeof(int*));
    if(ptr==NULL){
        printf("Memory is not allocated");
    }
    else{   printf("Enter the value of 5 val:");
            for(i=0;i<5;i++){
                scanf("%d",&*(ptr+i));
            }
            printf("Display all items:\n");
            for(i=0;i<5;i++){
                sum+=*(ptr+i);
                printf("%d ",*(ptr+i));
            }
    }
    printf("The sum val is %d\n",sum);
}

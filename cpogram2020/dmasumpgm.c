#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,n,sum=0,*ptr;
    printf("Enter the n val:");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL){
        printf("Memory is not allocated");
    }
    else{
        printf("Enter the 5 val:");
        for(i=0;i<n;i++){
            scanf("%d",&*(ptr+i));
        }
        for(i=0;i<n;i++){
            sum+=*ptr+i;
            printf("%d\n",*ptr+i);
        }
        printf("sum val=%d\n",sum);
    }
}

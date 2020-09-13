#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    float *ptr;
    printf("Enter the size:");
    scanf("%d",&n);
    ptr=(float *)malloc(sizeof(float));
    if(ptr==NULL){
        printf("Memory is not allocated");
    }
    else{
        printf("Enter the 5 float val:");
        for(int i=0;i<n;i++){
            //printf("Enter the float val %d:",i+1);
            scanf("%f",&*(ptr+i));
        }
        float max;
        for(int i=0;i<n;i++){
            if(*(ptr+i)>max){
                max=*(ptr+i);
            }
        }
        printf("max val is %.2f\n",max);

    }
}

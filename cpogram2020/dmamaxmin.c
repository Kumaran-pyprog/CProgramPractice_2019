#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,size;
    printf("Enter the size of array val:\n");
    scanf("%d",&size);
    //int *ptr[size];
    int *ptr;
    ptr=(int*)malloc(6*sizeof(int));
    if(ptr==NULL){
        printf("Memory is not allocated\n");
    }
    else{
        FILE *fp;
        fp=fopen("filedma.txt","w");
        if(fp==NULL){
            printf("File doesn't open\n");
        }
        else{
            printf("Enter the array val:\n");
            for(i=0;i<size;i++){
            scanf("%d",&*(ptr+i));
            }
            for(i=0;i<size;i++){
                printf("[%d]=%d\n",i,*(ptr+i));
            }
            int max=*ptr;
            for(i=0;i<size;i++){
                if(*(ptr+i)>max){
                    max=*(ptr+i);
                }
            }
            //second largest max val
            int max2=*ptr;
            for(i=0;i<size;i++){
                if((*(ptr+i)>max2)&&(*(ptr+i)<max)){
                    max2=*(ptr+i);
                }
            }
            //third largest max val
            int max3=*ptr;
            for(i=0;i<size;i++){
                if((*(ptr+i)>max3)&&(*(ptr+i)<max2)){
                    max3=*(ptr+i);
                }
            }
            int min=*ptr;
            int min2=min;
            int min3=min2;
            for(i=0;i<size;i++){
                if((*(ptr+i))<min){
                    min=*(ptr+i);
                }
            }
            //second min val
            for(i=0;i<size;i++){
                if((*(ptr+i)>min)&&(*(ptr+i)<min2)){
                    min2=*(ptr+i);
                }
            }
            //third min val
            for(i=0;i<size;i++){
                if((*(ptr+i)>min2)&&(*(ptr+i)<min3)){
                    min3=*(ptr+i);
                }
            }
            printf("Max val=%d\n",max);
            printf("Second Max val=%d\n",max2);
            printf("Third Max val=%d\n",max3);
            printf("Min val=%d\n",min);
            printf("Second Min val=%d\n",min2);
            printf("Third Min val=%d\n",min3);
        }
    }
}

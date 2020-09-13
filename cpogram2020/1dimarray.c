#include<stdio.h>
void read(int [],int);
void display(int [],int);
int main(){
    int size;
    printf("Enter the array size:");
    scanf("%d",&size);
    int arr[size];
    read(arr,size);
    printf("Array val are:\n");
    display(arr,size);
}
void read(int arr[],int size){
    printf("The array elements are:");
    for(int i=0;i<size;i++){
            scanf("%d",&arr[i]);
    }

}
void display(int arr[],int size){
    //printf("The array elements are:");
    int count=0;
    for(int i=0;i<size;i++){
            printf("array[%d]=%d\n",i,arr[i]);
            count++;
    }
    printf("Count no of val %d\n",count);

}


#include<stdio.h>
int main(){
    int n,sum=0;
    //int arr[5]={240,111,121,113,141};
    int arr[5];
    printf("Enter the array val:");
    scanf("%d",&n);
    /*
    for(int i=0;i<=n;i++){
        scanf("%d",&arr[i]);
        }*/
    printf("Display arry val:\n");
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<5;i++){
            printf("array val [%d]-->%d\n",i,arr[i]);
            sum+=arr[i];
            if (arr[i]>max){
                max=arr[i];
            }
            if (arr[i]<min){
                min=arr[i];
            }

      }
      printf("sum of array %d\n",sum);
      printf("max of array %d\n",max);
      printf("min of array %d\n",min);



}

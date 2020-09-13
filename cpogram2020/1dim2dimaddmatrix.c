//array is a collections of similar datatype.
#include<stdio.h>
void displayarray(int [],int);
void sum1dimarray(int [],int);
void find1dimmaxarray(int [],int);
void find1dimminarray(int [],int);
void copy1dimarray(int [],int [],int);
void display2dimarray(int,int,int[][100]);
void transposematrix2dimarray(int,int,int arr3[][100],int arr4[][100]);

int main(){
//size of array
int size;
printf("Enter the size:");
scanf("%d",&size);
int arr[size],arr2[size];
printf("size of array is %d\n",sizeof(arr));
printf("Enter the array element:");
for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
}
displayarray(arr,size);
sum1dimarray(arr,size);
find1dimmaxarray(arr,size);
find1dimminarray(arr,size);
copy1dimarray(arr,arr2,size);
printf("\n");
//2dimensional array
int row,col;
printf("Enter the row&col size:");
scanf("%d%d",&row,&col);
int arr3[row][col],arr4[col][row];
printf("Enter the 2dim array element:");
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        scanf("%d",&arr3[i][j]);
    }
}

display2dimarray(row,col,arr3);
transposematrix2dimarray(row,col,arr3,arr4);

}
void displayarray(int arr[],int size){
    printf("The array elements are:\n");
    int count=0;
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
        count++;
    }
    printf("\n");
    printf("No array element is %d\n",count);
}
void sum1dimarray(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    printf("sum of array is %d\n",sum);
}
void find1dimmaxarray(int arr[],int size){
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("Max array is %d\n",max);
}
void find1dimminarray(int arr[],int size){
    int min=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("Max array is %d\n",min)
}
void copy1dimarray(int arr[],int arr2[],int size){
    printf("After copy arr2 val:\n");
    for(int i=0;i<size;i++){
        arr2[i]=arr[i];
        printf("%d ",arr2[i]);
    }
}
void display2dimarray(int row,int col,int arr3[row][col]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d\t",arr3[i][j]);
        }
        printf("\n");
    }
}

void transposematrix2dimarray(int row,int col,int arr3[row][col],int arr4[col][row]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            arr4[j][i]=arr3[j][i];
        }
        printf("\n");
    }
    printf("Transpose matrix is:\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d\t",arr4[j][i]);
        }
        printf("\n");
    }
}

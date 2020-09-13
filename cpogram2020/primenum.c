#include<stdio.h>
int main(){
    int i,num1,num2,j,count;
    printf("Enter the num1&num2:");
    scanf("%d%d",&num1,&num2);
    printf("The range of num between %d to %d\n",num1,num2);
    printf("Total count of prime b/w %d and %d\n",num1,num2);

    for(i=num1;i<=num2;i++){
            count=0;
            for(j=1;j<=num2;j++){
                    if(i%j==0){
                        count++;
                    }
            }

            if(count==2){
                printf("%d ",i);
            }
    }


}

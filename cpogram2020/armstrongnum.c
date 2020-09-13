#include<stdio.h>
int main(){
    int n,sum=0,rem=0;
    printf("Enter the n val:");
    scanf("%d",&n);

    int num=n;
    while(num>0){

        rem=num%10;
        sum+=rem*rem*rem;
        num=num/10;
        }
        if (n==sum){
            printf("%d is an armstrong number",n);
            }
        else{
                printf("%d is not armstrong number",n);
            }


}

#include<stdio.h>
#include<math.h>
int main(){
    int n;
    float a;
    printf("Enter the n val:");
    scanf("%d",&n);
    a=sqrt(n);
    printf("%f",a);
    if(a-(int)a==0.0f)
        {
        printf("%d is perfect square\n",n);
        }
    else{
        printf("%d is not perfect square\n",n);
    }
}

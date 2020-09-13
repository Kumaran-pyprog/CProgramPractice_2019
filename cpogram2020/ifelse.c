#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main(){
    int a,b,c;
    printf("Enter the a val:");
    scanf("%d",&a);
    printf("Enter the b val:");
    scanf("%d",&b);
    printf("Enter the c val:");
    scanf("%d",&c);

    if((a>b)&&(a>c)){
        printf("%d is greater than than %d,%d",a,b,c);
    }
    else if ((b>a)&&(b>c)){
            printf("%d is greater than than %d,%d",b,a,c);

    }
    else if ((c>a)&&(c>b)){
            printf("%d is greater than than %d,%d",c,a,b);

    }
    else{
        printf("%d,%d,%d nums are equal",a,b,c);
    }
}


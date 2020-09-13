#include<stdio.h>
void flozoidpattern(int);
void flozoidrevpattern(int);
void halfpyramidpattern(int);
void halfpyramidrevpattern(int);
void diamondpattern(int);
void diamondnumpattern(int);
void diamondcharpattern(int);
int main(){
    int n;
    printf("Enter the num:");
    scanf("%d",&n);
    flozoidpattern(n);
    printf("FlozoidalRev Pattern:\n");
    flozoidrevpattern(n);
    printf("Halfpyramid pattern:\n");
    halfpyramidpattern(n);
    printf("Halfpyramid rev pattern:\n");
    halfpyramidrevpattern(n);
    printf("Diamond pattern:\n");
    diamondpattern(n);
    printf("Diamond num pattern:\n");
    diamondnumpattern(n);
    printf("Diamond char pattern:\n");
    diamondcharpattern(n);
}
void flozoidpattern(int num){
    for(int i=1;i<=num;i++){
        for(int j=1;j<i+1;j++){
            printf("*");
        }
        printf("\n");
    }
}
void flozoidrevpattern(int num){
    for(int i=num;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}
void halfpyramidpattern(int num){
    for(int i=1;i<=num;i++){
        for(int j=1;j<=num-i;j++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
}
void halfpyramidrevpattern(int num){
    for(int i=num;i>=1;i--){
        for(int j=1;j<=num-i;j++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
}
void diamondpattern(int num){
    for(int i=1;i<=num;i++){
        for(int j=1;j<=num-i;j++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=num;i>=1;i--){
        for(int j=1;j<=num-i;j++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
}
void diamondnumpattern(int num){
    for(int i=1;i<=num;i++){
        for(int j=1;j<=num-i;j++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    for(int i=num;i>=1;i--){
        for(int j=1;j<=num-i;j++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}
void diamondcharpattern(int num){
    for(int i=1;i<=num;i++){
        for(int j=1;j<=num-i;j++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            printf("%c",(64+j));
        }
        printf("\n");
    }
    for(int i=num;i>=1;i--){
        for(int j=1;j<=num-i;j++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            printf("%c",(64+j));
        }
        printf("\n");
    }
}

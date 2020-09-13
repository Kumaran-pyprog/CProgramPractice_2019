#include<stdio.h>
int main(){
    int a=2;
    char b='A';
    char str[100]="Hi ashok!";
    float f=10.22;
    double f2=10.23;
    int arr[5]={10,20,30,34,45};
    printf("Sizeof int %d\n",sizeof(a));
    printf("Sizeof char %c\n",sizeof(b));
    printf("Sizeof string %s\n",sizeof(str));
    printf("Sizeof float %f\n",sizeof(f));
    printf("Sizeof double %lf\n",sizeof(f2));
}

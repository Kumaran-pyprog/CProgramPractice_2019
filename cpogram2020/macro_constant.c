#include<stdio.h>
#include<limits.h>
#define pi 3.14159
#define SWAP(X,Y) X=X+Y;Y=X-Y;X=X-Y
float constantvalpi(int);
int main(){
    int r;
    printf("Enter the radius:");
    scanf("%d",&r);
    float rad=constantvalpi(r);
    printf("area of square:%.2f\n",rad);
    //Using Macros
    float area=pi*r*r;
    printf("area of square=%.2f\n",area);
    printf("Range of primitive datatypes:\n");
    printf("SCHAR_MIN=%d\n",SCHAR_MIN);//-128
    printf("SCHAR_MAX=%d\n",SCHAR_MAX);//127
    printf("CHAR_MIN=%d\n",CHAR_MIN);//-128
    printf("CHAR_MAX=%d\n",CHAR_MAX);//127
    printf("CHAR_MAX=%d\n",UCHAR_MAX);//255
    printf("UINT_MAX=%d\n",UINT_MAX);//-1
    printf("USHRT_MAX=%d\n",USHRT_MAX);//65535
    printf("ULONG_MAX=%d\n",ULONG_MAX);//-1
    printf("INT_MIN=%d\n",INT_MIN);//
    printf("INT_MAX=%d\n",INT_MAX);//
    volatile int num;
    printf("Enter the volatile num:\n");
    scanf("%d",&num);
    printf("After volatile=%d\n",num);//23   volatile whose value can be changed at any time by an external process,compiler can be checked these value for every time.
    printf("After volatile=%d\n",num);//23
    int a=10;
    printf("a val=%d\n",a);
    int *p;
    p=&a;
    printf("Address of p val=%d\n",p);
    printf("*p val=%d\n",*p);
    int C,D;
    printf("Enter the C&D val:");
    scanf("%d%d",&C,&D);
    printf("Before Swap c=%d,d=%d\n",C,D);
    SWAP(C,D);
    printf("After Swap c=%d,d=%d\n",C,D);



}
float constantvalpi(int rad){
    const float PI=3.14159;
    float area=PI*rad*rad;
    return area;
}

#include<stdio.h>
int main(){
    int a=0,b=2,res;
    res=a++ && ++b;
    printf("res=%d a=%d and b=%d\n",res,a,b);//a=1,b=2,res=0
    int x=0,y=3,res1;
    res1=++x && ++y;
    printf("res=%d x=%d and y=%d\n",res1,x,y);//x=1,y=4,res=1
    int i=1,j=2,res2;
    res2=i++ || ++j;
    printf("res=%d i=%d and j=%d\n",res2,i,j);//i=2,j=2,res=1
    int k=-1,l=1,res3;
    res3=++k || ++l;
    printf("res=%d k=%d and l=%d\n",res3,k,l);//k=0,l=2,res=1



}

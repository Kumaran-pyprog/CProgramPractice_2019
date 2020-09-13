//unary operator -only one variable
//++a,a++,!a,~a,&a
#include<stdio.h>
int main(){

int a=10;
printf("++a val is %d\n",++a);//11
printf("a val is %d\n",a);//11
printf("a++ val is %d\n",a++);//11
printf("a val is %d\n",a);//12
printf("!a val is %d\n",!a);//0 False
printf("&a val is %d\n",&a);//635672
printf("&a val is %p\n",&a);//0060FEFC

//Binary operator-it has two variable
int a1=12,b=13;
printf("a1+b val is %d\n",a1+b);

//Ternary operator -it has three operator
int x=13,y=25;
(x<y)?printf("x val is %d\n",x):printf("y val is %d\n",y);
//
}

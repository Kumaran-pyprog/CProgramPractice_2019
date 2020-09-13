//macros
#include<stdio.h>
#define calc(a,b) (a*b)/(a-b)
int main()
{
int a=20,b=10;
printf("%d\n",calc(a+4,b-2));//Ans=4
}
/*
int x = 0;
int f1() {
  x = 5;
  return x;
}
int f2() {
  x = 10;
  return x;
}
int main() {
  int p = f1() + f2();
  printf("%d ", x);//Ans:10
  return 0;
}*/

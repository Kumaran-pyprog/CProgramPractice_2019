//random num 1 to 100
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
//randomize();
int num,i=0,sum=0;
while(i<100)
 {
  num=rand()%100+1;
  printf("%d\t",num);
  sum=sum+num;
  i++;
/*  if(num==0)
    {
    num++;
    a[i]=num;
    printf("%d\t",a[i]);
    sum+=a[i];
    i++;
    }
 }*/
 }
printf("sum of random num is = %d\n",sum);
getch();

}

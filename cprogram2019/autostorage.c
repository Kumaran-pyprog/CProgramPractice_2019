//auto storage class
#include<stdio.h>
#include<stdlib.h>
int main()
{

    {//outside block1
    auto int i=20;
    {//inner block
      printf("inside block i val %d\n",i);
    }//innerblock end
     printf("outside block i val %d\n",i);
    }

}

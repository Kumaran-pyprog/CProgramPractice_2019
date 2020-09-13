#include<stdio.h>
int main()
{
char a=-1;
if(a>sizeof(int))//-1 equal to 255 ,range 0-254
    {
    printf("True\n");
    }
else
    {
    printf("Else\n");
    }
}

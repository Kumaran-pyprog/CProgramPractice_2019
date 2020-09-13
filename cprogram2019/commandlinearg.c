//command line araguments
#include<stdio.h>
#include<stdlib.h>
void main(int argc,char *argv[])
{
    if(argc==1)
    {
    printf("Insufficient number of arguments\n");
    }
int i;
printf("No of command =%d\n",argc);
printf("command line arguments:\n");
for(i=0;i<argc;i++)
    {
    printf("%s\n",argv[i]);
    }
}

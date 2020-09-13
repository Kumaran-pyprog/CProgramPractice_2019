//File pointer
#include<stdio.h>
#include<stdlib.h>
int main()
{
char ch;
FILE *fp;
fp=fopen("C:\CodeBlocks\cprogram2019\writetxt.txt","w+");
if(fp==NULL)
    {
    printf("File is not Open");
    }
else
    {
    printf("File is open created successfully");
    }
//store the data  in the file
printf("Enter the data:\n");
while((ch=getchar())!=EOF)
    {
    fputc(fp,ch);
    }
fclose(fp);

}

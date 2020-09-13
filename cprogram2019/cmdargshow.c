//show command using textfile.txt
#include<stdio.h>
#include<stdlib.h>
void main(int argc,char *argv[])
{
char ch;
FILE *fp;
fp=fopen(argv[1],"r");
if(fp==NULL)
    {
    printf("File does not found");
    return;
    }
while((ch=getc(fp))!=EOF)
    {
    putchar(ch);
    }
fclose(fp);
}

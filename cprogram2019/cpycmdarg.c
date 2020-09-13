//cpy command using comman line argument
#include<stdio.h>
#include<stdlib.h>
void main(int argc, char *argv[])
{
FILE *fp1,*fp2,*fp3;
char ch;
fp1=fopen(argv[1],"r");
if(fp1==NULL)
    {
    printf("File doesnot found");
    return;
    }
fp2=fopen(argv[2],"w");
while(ch=getc(fp1)!=EOF)
    {
    putc(ch,fp2);
    }
fclose(fp1);
fclose(fp2);
fp3=fopen(argv[1],"r");
while((ch=getc(fp2))!=EOF)
    {
    putchar(ch);
    }
fclose(fp3);
}

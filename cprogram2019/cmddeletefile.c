//delete the file
#include<stdio.h>
#include<stdlib.h>
void main(int argc, char *argv[])
{
FILE *fp;
char ch;
int status;
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
status=remove(argv[1]);
if(status==0)
    {
    printf("\nFile removed successfully");
    }
else
    {
    printf("Unable to delete the file");
    }
}

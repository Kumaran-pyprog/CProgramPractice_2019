#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    //sscanf function it is subsequent char untill it found white space.
    //sscanf() is used to extracting string from given string
    char strval[50],str1[20],str2[20],str3[20];
    printf("Enter the strval:");
    gets(strval);
    printf("%s\n",strval);
    sscanf(strval,"%s %s %s",str1,str2,str3);
    printf("sscanf is str1=%s str2=%s str3=%s\n",str1,str2,str3);
    //sprintf is oopsite of sscanf()
    char strvalue[50];
    //char str11[20]="Welcome",str22[20]="to",str33[20]="Bangalore";
    char str11[20],str22[20],str33[20];
    printf("Enter the strval:");
    gets(str11);
    printf("Enter the strval:");
    gets(str22);
    printf("Enter the strval:");
    gets(str33);
    sprintf(strvalue, "%s %s %s",str11,str22,str33);
    printf("Strvalue is %s\n",strvalue);

}

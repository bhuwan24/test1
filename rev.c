//This is my file

#include <stdio.h>
#include <string.h> 

main()
{
int l,i;
char str[100];
printf("enter the string\n");
gets(str);
l=strlen(str);
for(i=l-1;i>=0;i--)
printf("%c",*(str+i));
printf("\n");
    }











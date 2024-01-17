#include<stdio.h>
void main()
{
char s[10];
printf("enter the string\n");
scanf("%s",s);
printf("output=%s\n",s);

s[3]='\0';
printf("output=%s\n",s);

printf("output=%s\n",s+4);
}

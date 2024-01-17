#include<stdio.h>
void main()
{
int i;
char s[10];
printf("enter the string\n");
scanf("%s",s);

printf("Before:%s\n",s);

for(i=0;s[i];i++)
{
if(s[i]>='a' && s[i]<='z')
s[i]=s[i]^32;
}

printf("After:%s\n",s);
}

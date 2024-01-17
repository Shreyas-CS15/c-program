#include<stdio.h>
void main()
{
int i,len,j,t;
char s[10];

printf("Enter the string\n");
scanf("%s",s);

printf("Before: %s\n",s);

for(len=0;s[len];len++);

for(i=0,j=len-1;i<j;i++,j--)
{
t=s[i];
s[i]=s[j];
s[j]=t;
}
printf("after: %s\n",s);
}

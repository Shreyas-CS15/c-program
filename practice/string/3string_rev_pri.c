#include<stdio.h>
void main()
{
char s[10];
int i,j;
printf("ENter the string\n");
scanf("%s",s);

for(i=0;s[i];i++);

for(j=i-1;s[j];j--)
printf("%c",s[j]);
printf("\n");
}

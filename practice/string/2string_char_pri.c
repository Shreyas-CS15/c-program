#include<stdio.h>
void main()
{
char s[10];
int i,j;
printf("Enter the string\n");
scanf("%s",s);

for(i=0;s[i];i++);
for(j=0;s[j];j++)
printf("%c ",s[j]);
printf("\nstring length=%d",i);
printf("\n");
}

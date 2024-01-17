#include<stdio.h>
void main()
{
int i,c;
char s[10],ch;

printf("Enter the string\n");
scanf("%s",s);

printf("Enter the character\n");
scanf(" %c",&ch);

for(i=0,c=0;s[i];i++)
{
if(s[i]==ch)
c++;
}
printf("character %c is present %d\n",ch,c);
}

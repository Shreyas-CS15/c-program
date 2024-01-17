#include<stdio.h>
void main()
{
char s[10],ch,i;
printf("Enter the string\n");
scanf("%s",s);
printf("Enter the character\n");
scanf(" %c",&ch);

for(i=0;s[i];i++)
{
if(s[i]==ch)
{
printf("char %c present\n",ch);
return;
}
}
printf("not present\n");
}

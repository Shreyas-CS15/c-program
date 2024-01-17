#include<stdio.h>
void main()
{
int i,c;
char s[10],ch;
printf("Enter the string\n");
scanf("%s",s);

for(i=0,c=0;s[i];i++)
{
if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
c++;
}
printf("vowels are %d\n",c);
}

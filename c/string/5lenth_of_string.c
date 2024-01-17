#include<stdio.h>
void main()
{
char s[10];
int len,ele;
ele=sizeof(s)/sizeof(s[0]);
printf("elements=%d",ele);
printf("enter the string\n");
scanf("%s",s);

for(len=0;s[len];len++);
printf("length of string is %d\n",len);

}

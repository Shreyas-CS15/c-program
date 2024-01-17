//Little enidian
#include<stdio.h>
void main()
{
int i=258;
char *ip;
ip=(char *)&i;

if(*ip==2)
printf("Little enidian\n");
else
printf("big enidian\n");



}

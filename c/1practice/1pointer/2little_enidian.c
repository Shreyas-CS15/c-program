#include<stdio.h>
void main()
{
int i=258;
char *cp;
cp=(char *)&i;

if(*cp==2 )
printf("little enidian\n");

else
printf("Big enidian\n");
}

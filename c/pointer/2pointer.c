#include<stdio.h>
void main()
{
int i=258;
int *ip;
char *cp;

ip=&i;
cp=(char *)&i;
printf("*ip=%d , *cp=%d\n",*ip,*cp);
//printf("*ip=%p , *cp=%p\n",&ip,&cp);
*cp='a';
printf("*ip=%d , *cp=%d\n",*ip,*cp);

}

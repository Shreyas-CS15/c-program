#include<stdio.h>
void main()
{
int *p;
int c=10,s=20;
p=&c;
printf("c=%d , *p=%d\n",c,*p);
*p=100;
printf("c=%d , *p=%d\n",c,*p);
p=&s;
printf("s=%d , *p=%d\n",s,*p);
*p=200;
printf("s=%d , *p=%d\n",s,*p);
printf("s=%d , c=%d\n",s,c);
}

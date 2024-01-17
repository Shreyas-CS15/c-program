#include<stdio.h>
void main()
{
char *c;
float *f;
int *p;
double *d;
printf("%ld %ld\n",sizeof(c),sizeof(*c));
printf("%ld %ld\n",sizeof(f),sizeof(*f));
printf("%ld %ld\n",sizeof(p),sizeof(*p));
printf("%ld %ld\n",sizeof(d),sizeof(*d));
//printf("%d\n",ip);
}

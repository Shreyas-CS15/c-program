//differencr between inter and float pointer
#include<stdio.h>
void main()
{
float i=258.3;
int *ip;
float *fp;

fp=&i;
ip=(int *)&i;
printf("%d\n",*ip);
printf("%f\n",*fp);




}

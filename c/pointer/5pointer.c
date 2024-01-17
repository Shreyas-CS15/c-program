#include<stdio.h>
void main()
{
int pos,*ip;
double i=23.5;
ip=(int *)&i;
for(ip=ip+1;ip>=&i;ip--)
{
for(pos=31;pos>=0;pos--)
printf("%d",*ip>>pos&1);
}
printf("\n");
}



/*
#include<stdio.h>
void main()
{
float i=23.5;
int *ip,pos;
ip=(int *)&i;

for(pos=31;pos>=0;pos--)
printf("%d",*ip>>pos&1);
printf("\n");
}*/

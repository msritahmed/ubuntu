//fabinocci


#include<stdio.h>
#include<string.h>
#include<stdint.h>
void main()
{
int a[6];
int i,j;
a[0]=0;
a[1]=1;
for(i=2;i<6;i++)
{
a[i]=a[i-1]+a[i-2];
}
for(i=0;i<6;i++)
{
printf("%d\n",a[i]);
}
}

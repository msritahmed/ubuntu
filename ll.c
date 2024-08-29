//maximmum
#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
void main()
{
int a[5];
int i;
int max;

printf("enter the numbers\n");
for(i=0;i<5;i++)
scanf("%d",&a[i]);

max=a[0];
for(i=0;i<5;i++)
{

if(a[i]>max)
{
max=a[i];
}
}
printf("maximum is%d\n",max);
}


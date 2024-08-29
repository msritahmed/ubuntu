#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
void main()
{
int a[5];
int i,sum=0;
printf("enter the numbers\n");
for(i=0;i<5;i++)
scanf("%d",&a[i]);
for(i=0;i<5;i++)
sum+=a[i];
printf("avg is %d\n",sum/5);
}


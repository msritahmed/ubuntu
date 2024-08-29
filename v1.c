#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
void main()
{
int a[10];
int i;
int f=0;

printf("enter the value\n");
for(i=0;i<10;i++)
scanf("%d",&a[i]);


for(i=0;i<10;i++)
{
if(a[i]==17)
{
f=1;
break;
}
}
if(f==1)
printf("true\n");
else
printf("false\n");
}


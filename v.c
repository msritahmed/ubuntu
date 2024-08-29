#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
void main()
{
int a[30];
int c;
int i;

printf("enter the size\n");
scanf("%d",&c);
printf("enter the vlaues \n");
for(i=0;i<c;i++)
scanf("%d",&a[i]);

for(i=0;i<c;i++)
printf("%d\n",a[i]);
}


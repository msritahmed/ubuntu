#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
int a[10];
int c=0;
int i;
printf("enter the number\n");
for(int i=0;i<10;i++)
{

scanf("%d",&a[i]);
}
for(int i=0;i<10;i++)
{
c=c+a[i];

}

printf("1' are%d\n",c/10);
}


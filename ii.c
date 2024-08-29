
///pointer and array

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
int a[5]={1,2,3,4,5};
int *p;
p=a;
for(int i=0;i<5;i++)
{
printf("%d\n",*p);
printf("%d\n",p);
p++;
}
}

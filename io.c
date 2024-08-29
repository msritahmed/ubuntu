
//to count set bits

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
int a,b;
int c=0;

printf("enter the number\n");
scanf("%d",&a);

while(a)
{
c=c+(a&1);
a=a>>1;
}

printf("1's are%d\n",c);
}


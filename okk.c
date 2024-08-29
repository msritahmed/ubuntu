#include<stdint.h>
#include<stdio.h>
#include<string.h>
void main()
{
int a,b;
printf("enter the number\n");
scanf("%d",&b);
int rem,r=0;
a=b;

while(a!=0)
{
rem=a%10;
r=r*10+rem;
a=a/10;
}

if(r==b)
printf("palindrom\n");
else
printf("not pali\n");
}


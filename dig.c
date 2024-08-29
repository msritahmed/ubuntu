
//number of digits

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{

int n;
int c=0;

printf("enter the numbers\n");
scanf("%d",&n);
if(n==0)
c=1;

while(n!=0)
{
c++;
n=n/10;

}


printf("number of digits is :%d\n",c);
}



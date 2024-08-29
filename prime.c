//prime or not

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
int n,i;
int f=0;
printf("enter the numbers\n");
scanf("%d",&n);
 
 if(n<=1)
 {f=1;}
 
 
 for(i=2;i<n;i++)
 {if(n%i==0)
 f=1;
 }
 
 
 if (f==0)
 printf("prime\n");
 else
 printf("not prime\n");
}

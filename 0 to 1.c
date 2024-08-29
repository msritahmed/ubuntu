
///binary to decimal conversion

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void  main()
{

int n,ans=0,a=1;


printf(" enter the binary numbers\n");
scanf("%d",&n);

while(n!=0)
{
ans=ans+(n%10)*a;
n=n/10;
a*=2;
}
printf("%d\n",ans);
}


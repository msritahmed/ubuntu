//assending order
#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
void main()
{
int a[30];
int n,i,j;
printf("enter the n\n");
scanf("%d",&n);

printf("enter the values\n");
for( i=0;i<n;++i)
scanf("%d",&a[i]);

for(i=0;i<n;++i)
{
for(j=i+1;j<n;++j)
{
if(a[i]>a[j])
{
int temp =a[i];
a[i]=a[j];
a[j]=temp;
}
}
}

printf("after the sorting\n");
for(int i=0;i<n;++i)
printf("%d\n",a[i]);
}


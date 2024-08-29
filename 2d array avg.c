#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
void main()
{
int a[2][3];

int i,j,sum=0;
printf("enter the numbers\n");
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{

scanf("%d",&a[i][j]);
}
}

for(i=0;i<2;i++)
{

for(j=0;j<3;j++)
{
sum+=a[i][j];
}
}
printf("avg is %d\n",sum/6);
}


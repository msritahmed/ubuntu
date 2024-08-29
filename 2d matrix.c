#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
void  main()
{
int a[2][3];
int i,j;

printf("enter the vlues\n");
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
a[i][j]=i*j;
}
}
printf("entered values\n");

for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
printf("%d",a[i][j]);
}
printf("\n");
}

}

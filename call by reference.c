#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
void f(int *x,int *y)
{
int a,b,temp;

temp=*x;
*x=*y;
*y=temp;

//printf("swaped no %d%d",x,y);
}
void main()
{int a,b;
printf("enter to number\n");
scanf("%d%d",&a,&b);
f(&a,&b);
printf("%d%d",a,b);

}

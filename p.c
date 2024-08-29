#include<stdio.h>
#include<stdint.h>
#include<string.h>
#include<stdlib.h>



void main()
{
char a[]="ahmed";
char b[10]="asfghjkilmjdjscjschjcn";
printf("a is %s\n",a);


//printf("enter b\n");
//scanf("%s",b);
printf(" b is %s\n",b);


int len=0;
len=sizeof(a);
printf("%d\n",len);


int l=0;
int s[3]={1,2,3};
l=sizeof(s);
printf("%d\n",l);


}


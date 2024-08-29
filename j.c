#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void p(char a[])
{
printf("%s",a);
printf("%d",strlen(a));
}
void main()
{
char a[]="geek";
printf("%s",a);
p(a);
}


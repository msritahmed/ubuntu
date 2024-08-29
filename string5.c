#include<stdlib.h>
#include<stdio.h>
#include<stdint.h>
#include<string.h>
#define m 52
void main()
{
char a[m];

printf("enter the string\n");
//scanf("%s",a);//NOT taking space

//fgets(a,m,stdin);//taking space


gets(a);//taking space

puts(a);
}


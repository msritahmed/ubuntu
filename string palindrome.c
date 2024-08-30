//string palindrome
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdint.h>
void main()
{char str[20];
int l,i;
int f=0;
printf("enter the string\n");
scanf("%s",str);

for(l=0;str[l]!='\0';l++);

for(i=0;i<l/2;i++)
{
if(str[i]!=str[l-i-1])
{
f=1;
break;
}
}

if(f==0)
printf("pali\n");
else
printf("not pali\n");
}


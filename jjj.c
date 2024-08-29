#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
char a[]="geek";
printf("%s",a);
char s1[10];
char b[]="forgeek";
//strcat(a,b);
//int c=strcmp(a,b);
//printf("%d",c);
strcpy(s1,a);
puts(s1);
char* c=strstr(b,a);
puts(c);
puts(a);
char s[]="geek";
int d=strcmp(a,s);
printf("%d",d);
}


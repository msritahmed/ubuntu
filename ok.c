
//string and pointer
#include<stdio.h>

#include<stdint.h>
#include<string.h>
void main()
{
char a[]="ahmednadaf";
char *p;
p=&a;
while(*p!='\0')
{
printf("%c",*p);
p++;
}
}

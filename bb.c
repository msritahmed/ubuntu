
///structure
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct a
{
int a;
char b;
};

//void main()
//{
//struct a ob;
//ob.a=1;
//ob.b='a';
//printf("%d\n%c\n",ob.a,ob.b);
//}

void main()
{
struct a ob={1,'a'};
printf("%d\n%c\n",ob.a,ob.b);

}

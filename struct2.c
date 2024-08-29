//size of pointers
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int fuc(int a,int b);

struct s
{
};

void main()
{
int a=1;
char c='g';
struct s b;

int *str=&a;
char *str1=&c;
struct s *cc=&b;
int (*ptr)(int,int);

printf("sizeof int %d\n",sizeof(str));
printf("sizeof char %d\n",sizeof(str1));
printf("sizeof struct %d\n",sizeof(cc));
printf("sizeof fuction %d\n",sizeof(ptr));

}

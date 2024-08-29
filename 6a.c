//SERVER
#include<stdio.h>
#include<stdlib.h>
#include<sys/msg.h>
#include<unistd.h>
#include<string.h>
#define bs 512
struct msg
{
long int c;
char st[bs];
};
int main()
{
int msgid;
int r=1;
struct msg sd;
char b[50];
msgid=msgget((key_t)14534,0666|IPC_CREAT);
if(msgid==-1)
{
printf("faild");
exit(0);
}
while(r)
{
printf("enter the text");
fgets(b,50,stdin);
sd.c=1;
strcpy(sd.st,b);
if(msgsnd(msgid,(void*)&sd,bs,0)==1)
{
printf("msg not sent");
}
if (strncmp(b,"end",3)==0)
{
r=0;}
}
}



















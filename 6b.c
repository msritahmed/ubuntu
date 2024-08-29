#include<stdio.h>
#include<stdlib.h>
#include<sys/msg.h>
#include<unistd.h>
#include<sys/wait.h>
#include<sys/ipc.h>
#include<string.h>

#define bs  512
struct msg 
{
long int c;
char st[bs];
};
int main()
{
int r=1;
int msgid;
long int msgtorcv=1;
struct msg sd;
msgid=msgget((key_t)14534,0666|IPC_CREAT);
while(r)
{
msgrcv(msgid,(void*)&sd,bs,msgtorcv,0);
printf("recived data %s",sd.st);
if(strncmp(sd.st,"end",3)==0)
{
r=0;
}
}
msgctl(msgid,IPC_RMID,0);
}


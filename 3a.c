#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<pthread.h>
#define BUFFER_SIZE 1024
 char buffer[BUFFER_SIZE];
 void *read_thread(void *arg)
 {
while(strncmp("stop",buffer,4)!=0)
{
printf("enter the text\n");
fgets(buffer,BUFFER_SIZE,stdin);
sleep(10);
}
pthread_exit("read sucessfule");
}
void *convert_thread()
{int i;
while(strncmp("stop",buffer,4)!=0)
{sleep(1);
printf("converted text\n");
for(i=0;i<strlen(buffer);i++);
printf("%c",toupper(buffer[i]));
}
pthread_exit("convert  sucessfule");
}
int main()
{
int result;
pthread_t rthread,cthread;
void *thread_result;
printf("enter the text to convert upper case anst to stop \n");
pthread_create(&cthread,NULL,convert_thread,NULL); 
pthread_create(&rthread,NULL,read_thread,NULL);


pthread_join(rthread,&thread_result);
printf("read thrad %s\n",(char*)thread_result);
pthread_join(cthread,&thread_result);
printf("conveted thread %s\n",(char*)thread_result);
 return(0);
 }
 






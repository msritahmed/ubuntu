#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<semaphore.h>
#include<pthread.h>
#include<ctype.h>
#define BUFFER_SIZE 1024
sem_t sem;
char buffer[BUFFER_SIZE];
void *read_thread(void *arg)
{
while(strncmp("stop",buffer,4)!=0)
{
printf("eneter the text\n");
fgets(buffer,BUFFER_SIZE,stdin);
sem_post(&sem);
sleep(2);
}
printf("read sucessful\n");
}

void *convert_thread()
{int i;
sem_wait(&sem);
while(strncmp("stop",buffer,4)!=0)
{printf("converted text\n");
for(i=0;i<strlen(buffer);i++)
printf("%c",toupper(buffer[i]));
sem_wait(&sem);
}

pthread_exit("converted sucessfull\n");
}

int main()
{
int result;

pthread_t rthread,cthread;
void *thread_result;

sem_init(&sem,0,0);
printf("enter the text and'stop'\n");
pthread_create(&rthread,NULL,read_thread,NULL);
pthread_create(&cthread,NULL,convert_thread,NULL);
result=pthread_join(rthread,&thread_result);
printf("thread read joined %s",(char*)thread_result);

pthread_join(cthread,&thread_result);
printf("thread convert joned %s",(char*)thread_result);
 
sem_destroy(&sem);
exit(0);
}




















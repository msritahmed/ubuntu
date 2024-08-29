#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<semaphore.h>
#include<pthread.h>
#include<ctype.h>
#define ms 10
int count=0;
pthread_mutex_t m;

void *up(void *arg)
{
pthread_mutex_lock(&m);
for(int i=0;i<ms;i++)
{
count++;
printf("%d\n",count);
}
pthread_mutex_unlock(&m);
pthread_exit(NULL);
}

void *down(void *arg)
{pthread_mutex_lock(&m);
for(int i=0;i<ms;i++)
{
count--;
printf("%d\n",count);
}
pthread_mutex_unlock(&m);
pthread_exit(NULL);
}

int main()
{
pthread_t ut,dt;
pthread_mutex_init(&m,NULL);
pthread_create(&ut,NULL,up,NULL);
pthread_create(&dt,NULL,down,NULL);
pthread_join(ut,NULL);
pthread_join(dt,NULL);
pthread_mutex_destroy(&m);
return 0;
}


















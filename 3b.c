#include<stdio.h>
#include<unistd.h>
#include<ctype.h>
#include<pthread.h>
#include<stdlib.h>
#include<string.h>
 
#define BUFFER_SIZE 1024
char buffer[BUFFER_SIZE];

void *read_thread(void *arg)
{
  while(strncmp ("stop", buffer, 4) != 0)
    {
      printf("Enter text:  ");
      fgets(buffer,BUFFER_SIZE, stdin);
      sleep(1);
    }
  pthread_exit ("&quot;read_thread exit successful&quot");
  }
  
void *convert_thread()
{
  int i;
  while(strncmp ("stop",buffer, 4) != 0)
    {
      sleep(1);
      printf("&quot;Converted text:  &quot;");
      for(i = 0; i<strlen (buffer); i++)
printf("&quot;%c&quot;", toupper (buffer[i]));
    }
  pthread_exit("&quot;convert_thread exit successful&quot;");
}

int main ()
{
  int result;
  pthread_t rthread, cthread;
  void *thread_result;
  printf("&quot;Enter text, the program will convert it into upper case, \n To stop enter &#39;stop&#39; \n&quot;");
  pthread_create(&rthread, NULL, read_thread, NULL);
  pthread_create(&cthread, NULL, convert_thread, NULL);
  pthread_join(rthread, &thread_result);
  printf("&quot;read_thread joined, %s\n",(char *)thread_result);
  pthread_join(cthread, &thread_result);
  printf("&quot;convert_thread joined, %s\n", (char *) thread_result);
return(0);
}




























#include<unistd.h>
#include <stdio.h>
int main(void)
{
 if(fork()){
 printf("id : %d", getpid());
         fork() && (fork() ||fork() && fork());
         printf("id : %d", getpid());
         }
 else
 fork();
 printf("id : %d", getpid());
  sleep(2);
  return 0 ;
         }

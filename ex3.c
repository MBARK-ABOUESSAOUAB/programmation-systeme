#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int main()
{
fork();
fork();
fork();
printf("hello\n");
exit(0);
}


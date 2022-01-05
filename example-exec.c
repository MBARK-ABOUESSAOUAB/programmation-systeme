#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <errno.h>
int main(int argc, char * argv [] )
{
	execl("/bin/ls", "ls", "-l", "/" , (char *) NULL);
	printf("\t\t =======> suite du programme <======== /n" );
	return 0;
}

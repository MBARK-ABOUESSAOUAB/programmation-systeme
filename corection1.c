#include<stdlib.h>
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>
int main (intargc, char * argv[]){
int fd; // Notre file descriptorif (argc!= 2) 
{fprintf(stderr, "syntaxe : %s <fichier>\n", argv[0]);exit (1);}
if (-1 == (fd= open(argv[1], O_WRONLY | O_CREAT, S_IRWXU))) 
// Création du fichier et test
{perror("open() ");
exit(EXIT_FAILURE);}
char c = 'a'; 
// Octet à écrireinti; // compteurfor (i = 0 ; i < 26 ; i++)
{write(fd, &c, sizeof(char)); // Ecriture, Il faut bien passer l'adresse de c, car write() attend un pointeur !c++; // Incrément} return EXIT_SUCCESS;}

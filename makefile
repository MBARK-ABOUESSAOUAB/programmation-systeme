#useComplexe : useComplexe.o Complexe.o 
#	gcc -Wall -lm  useComplexe.o Complexe.o -o useComplexe 
#useComplexe.o : useComplexe.c Complexe.o useComplexe 
 #	gcc -Wall -c useComplexe.c  
#Complexe.o : Complexe.c Complexe.h
#	gcc -Wall -c Complexe.c
 OBJETS =  Complexe.o useComplexe.o
cc = gcc
CFLAGS = -Wall -g
Complexe  : $(OBJETS)
	 $(CC) $(CFLAGS) $(OBJETS)  -o Complexe -lm 
 Complexe.o : Complexe.c useComplexe.h
	 $(CC) $(CFLAGS) -c Complexe.c
useComplexe.o : useComplexe.c useComplexe.h
	 $(CC)  $(CFALGS) -c  useComplexe.c


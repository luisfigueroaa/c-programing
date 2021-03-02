#include <stdio.h>

// copiar la entrada a la salida
main(){
    int c;
    c = getchar(); 	// primera forma de hacerlo
    while(c!=EOF){  // EOF = end of file
	putchar(c);
	c = getchar();
    }
    /*while((c=getchar()) != EOF)
	putchar(c);*/
}

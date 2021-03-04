// Contador de espacios en blanco, tabulaciones y nuevas líneas
#include <stdio.h>

main(){
    int c, nb, tb, nl;

    nb = 0;
    tb = 0;
    nl = 0;

    while((c = getchar()) != EOF){ 
	if(c == ' ')	// blank spaces
	    ++nb;
	if( c == '\t')	// tabs
	    ++tb;
	if( c == '\n')	// new lines 
	    ++nl;
    }
    printf("\n-------------------\n");    
    printf("Espacios en blanco:\n");
    printf("%d\n", nb);
    printf("Tabulaciones:\n");
    printf("%d\n", tb);
    printf("Nuevas lineas:\n");
    printf("%d\n", nl);
}

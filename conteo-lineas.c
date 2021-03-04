#include <stdio.h>

// contar lineas de entrada
main(){
    int c, ni;

    ni = 0;

    while((c = getchar()) != EOF)
	if(c == '\n')
	    ++ni;
    printf("%d\n", ni);
}

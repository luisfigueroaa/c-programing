#include <stdio.h>

//conteo de caracteres de entrada, version 2

main(){
    double nc;

    for (nc = 0; getchar() != EOF; ++nc)
	;
    printf("%.0f\n", nc);
}

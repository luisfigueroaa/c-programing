#include <stdio.h>

main(){
    int c;
    int last_c;
    
    last_c = ' ';

    while((c=getchar()) != EOF){
	if (c != ' ' || last_c != ' ')
	    putchar(c);
	last_c = c;
    }
}

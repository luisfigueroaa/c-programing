#include <stdio.h>

#define IN  1	// INside a word
#define OUT 0	// OUTside a word

// count lines, words and characters of the INput
main(){
    int c, nl, nw, nc, state;
    
    state = OUT;
    nl = nw = nc = 0;
    while((c = getchar()) != EOF){
	++nc;
	if(c == '\n')
	    ++nl;
	if(c == ' ' || c == '\n' || c == '\t')
	    state = OUT;
	else if(state == OUT){
	    state = IN;
	    ++nw;
	}
    }
    printf("Lines\tWords\tCharacters\n");
    printf("%d\t%d\t%d\n", nl, nw, nc);
}

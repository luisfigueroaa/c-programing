#include <stdio.h>

//count de Number of Characters
main(){
    long nc;

    nc = 0;
    while(getchar() != EOF)
	++nc;
    printf("%ld\n", nc);
}

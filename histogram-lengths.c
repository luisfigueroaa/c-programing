#include <stdio.h>
#include <string.h>

int main() {
    int c, i, l;
    char word[i];

    i = l = 0;
    while((c=getchar()) != EOF){
	word[i] = c;
	++i;
    }
    l = strlen(word);
    for(i = 0; i <= l; ++i)
	//printf("%c\t", word[i]);    // horizontal
	printf("\n%b\t", word[i]);  // vertical
}

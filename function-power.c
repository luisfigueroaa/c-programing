#include <stdio.h>

int power (int base, int n);

int main(){
    /*int x;
    x = power(2, 2);
    printf("%d", x);*/
    int i;

    for (i = 0; i < 10; ++i)
	printf("%6d %6d %6d\n", i, power(2, i), power(4, i));
    return 0;
}

int power (int base, int n){
    int i, p;

    p = 1;
    
    for(i = 1; i<= n; ++i)
	p = p * base;
    
    return p;
}

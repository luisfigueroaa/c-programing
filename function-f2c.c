#include <stdio.h>

#define LOWER	0	// lower limit
#define UPPER	300	// upper limit
#define STEP	20	// size of the increment

double f2c(double fahr);  // declarate function

// print fahrenheit - celsius table
int main(){
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
	printf("%3d\t%6.1f\n", fahr, f2c(fahr));
    return 0;
}

double f2c(double fahr){
    int cels;

    cels = (5.0/9.0)*(fahr-32);

    return cels;
}

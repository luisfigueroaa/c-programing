#include <stdio.h>  // standart input output
/* prints the table for fahrenheit-celcius
   = 0, 20, 300, ... */

main(){
    int fahr, celsius;	    // variables
    int lower, upper, step

    lower = 0;	// lower limit from the table
    upper = 300;    // upper limit from the table
    step = 30;	// size of the increase

    fahr = lower;
    while(fahr <= upper){
	celsius = 5 * (fahr-32)/9;  // formula fahr to celsius
	printf("%d\t%d\n", fahr, celsius); // imprimir
	fahr = fahr + step; // incrementar fahr step by step
    }
}

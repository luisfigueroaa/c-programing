#include <stdio.h>  // standart input output
/* prints the table for fahrenheit-celcius
   = 0, 20, 300, ... */

main(){
    printf("Farenheit to Celcius Table\n");
    printf("--------------------------\n");
    //int fahr, celsius;	    // variables
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;	// lower limit from the table
    upper = 300;    // upper limit from the table
    step = 30;	// size of the increase

    fahr = lower;
    while(fahr <= upper){
	celsius = 5 * (fahr-32)/9;  // formula fahr to celsius
	//printf("%3d\t%6d\n", fahr, celsius); // print with tabulation and discreet numbers
	//printf("%3d%6d\n", fahr, celsius); // print discreet numbers
	printf("%3.0f\t%6.3f\n", fahr, celsius);  // print float numbers
	fahr = fahr + step; // increment fahr step by step
    }
}

/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <complex.h>

// Function to calculate square root of the number, provided through command line

int main(int argc, char* argv[]) {
	
	if (argc != 2) {
		printf("Usage: sqrt input\n\n");
		exit(-1);
	}

	int input = atoi(argv[1]);
	double complex s = csqrt(input);
	printf("Sqrt of %d is %.2f + %.2fi\n ",input,creal(s),cimag(s));
	printf("End of program. Exiting.");
	return(0);

} // end main

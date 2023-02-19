#include <stdlib.h>
#include <time.h>
/**
 * main- Entry point
 *
 * description- use srand then rand
 * return: Always 0(success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n=rand() - RAND_MAX /2;

	if( n > 0 ) {
		printf("is positive\n");
	} else if( n == 0 ) {
		printf("is zero\n");
	} else( n < 0 ) {
		printf("is negative\n");
	}
return(0);

} 
	

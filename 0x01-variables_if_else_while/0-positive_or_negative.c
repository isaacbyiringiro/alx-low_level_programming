#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	/* Check if number is zero, positive or negative */
	if (n > 0) {
		printf("The number %d is positive.\n, n");
	}
	else if (n < 0) {
		printf("The number %d is negative.\n, n");
	}
	else (n = 0) {
		printf("The numbe %d is zero.\n, n");
	}
	return (0);

}

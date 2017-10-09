/*n-tiot fibonacci element*/

#include <stdio.h>
#include <stdlib.h>
#include "fibonacci.h"

int main( void ){
	int n;

	scanf("%d", &n);
    printf("\n%d", fibonacci(n));

	exit(0);
}

/*n-tiot fibonacci element*/

#include <stdio.h>
#include <stdlib.h>
#include "fibonacci.h"
#include "msg.h"
#include <string.h>

int main( void ){
	int n;

	scanf("%d", &n);
	printf("\n%d", fibonacci(n));
	printf("\n%d", msg());

	exit(0);
}

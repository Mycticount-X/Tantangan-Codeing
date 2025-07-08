#include <stdio.h>

int main () {
	unsigned long long int a, b;
	scanf("%llu %llu", &a, &b);
	
	if (a < 4294967296 || b < 4294967296) printf("%llu\n", a*b);
	else printf("18446744073709551616\n");
	return 0;
}




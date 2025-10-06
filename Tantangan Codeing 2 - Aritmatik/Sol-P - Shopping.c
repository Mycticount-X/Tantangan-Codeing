#include <stdio.h>

int main () {
	int disc, cost;
	for (int i = 0; i < 4; i++) {
		scanf("%d %d", &disc, &cost);
		double price = (double)cost / (100 - disc) * 100;
		printf("$%.2lf\n", price);
	}
	return 0;
}

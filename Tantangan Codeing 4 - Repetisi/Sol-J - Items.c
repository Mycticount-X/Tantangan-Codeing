#include <stdio.h>

int main () {
	int test;
	long long num, temp, summa;
	scanf("%d", &test);
	
	for (int t = 1; t <= test; t++) {
		summa = 0;
		scanf("%lld", &num);
		for (int i = 0; i < num; i++) {
			scanf("%lld", &temp);
			summa += temp;
		}
		printf("Case #%d: %lld\n", t, summa);
	}
	
	
	return 0;
}

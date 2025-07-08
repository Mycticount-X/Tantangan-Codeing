#include <stdio.h>

int main () {
	getchar();
	int der;
	long long sec;
	for (int i=0; i < 3; i++) {
		scanf("%d %lld", &der, &sec);
		double rotasi = (double)der*sec / 360;
		printf("%.2lf\n", rotasi);
	}
	return 0;
}

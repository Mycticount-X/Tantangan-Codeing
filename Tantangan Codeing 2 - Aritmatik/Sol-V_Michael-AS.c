#include <stdio.h>

int main () {
	getchar();
	int cels;
	double ream, farh,kelv;
	for (int i=0; i < 3; i++) {
		scanf("%d", &cels);
		ream = 4.0 / 5.0 * cels;
		farh = 9.0 / 5.0 * cels + 32;
		kelv = cels + 273;
		printf("%.2lf %.2lf %.2lf\n", ream, farh, kelv);
	}
	return 0;
}

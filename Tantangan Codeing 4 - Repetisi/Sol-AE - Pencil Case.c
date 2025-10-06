#include <stdio.h>

int main () {
	int test;
	scanf("%d", &test);
	
	for (int t = 1; t <= test; t++) {
		double rad, hei;
		scanf("%lf %lf", &rad, &hei);
		
		double area = 2*3.14*rad*rad + 2*3.14*rad*hei;
		printf("Case #%d: %.2lf\n", t, area);
	}
	return 0;
}

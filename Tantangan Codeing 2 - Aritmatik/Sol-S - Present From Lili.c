#include <stdio.h>

int main () {
	double len, wid, hei;
	scanf("%lf %lf %lf", &len, &wid, &hei);
	double luas = 3*(len*wid) + (wid*hei);
	printf("%.3lf\n", luas);
	return 0;
}

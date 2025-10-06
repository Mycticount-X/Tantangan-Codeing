#include <stdio.h>

int main () {
    double a, b, c, d;
	for (int i = 0; i < 3; i++) {
        scanf("%lf %lf %lf %lf", &a, &b, &c, &d); getchar();
        double result = (double)a/1*2 + (double)b/2*4 + (double)c/3*6 + (double)d/4*4;
        printf("%.2lf\n", result);
    }
}

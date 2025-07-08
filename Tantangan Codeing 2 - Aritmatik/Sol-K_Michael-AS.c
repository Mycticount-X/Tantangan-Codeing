#include <stdio.h>
#include <stdio.h>

int main () {
    double m, x;
    scanf("%lf %lf", &m, &x);
    double hasil = m*pow(1 + x/100, 3);
    printf("%.2lf\n", hasil);
}
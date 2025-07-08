#include <stdio.h>

int main () {
    int test;
    double disc,price, max, cashback;
    scanf("%d", &test);
    for (int x = 1; x <= test; x++) {
        scanf("%lf %lf %lf", &price, &disc, &max);
        cashback = disc/100 * price;
        if (cashback > max) {
            cashback = max;
        }
        printf("Case #%d: %.0lf\n", x, cashback);
    }
    return 0;
}
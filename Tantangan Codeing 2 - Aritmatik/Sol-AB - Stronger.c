#include <stdio.h>

int main () {
    long long hit;
    scanf("%lld", &hit);
    long long DMG = hit * 100 + 50 * (hit * (hit - 1)) / 2;
    printf("%lld\n", DMG);
}
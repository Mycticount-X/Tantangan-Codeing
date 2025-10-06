#include <stdio.h>

int main () {
    long long hit;
    scanf("%lld", &hit);
    long long points = 100*hit + 50*(hit*(hit-1))/2;
    printf("%lld\n", points);
}
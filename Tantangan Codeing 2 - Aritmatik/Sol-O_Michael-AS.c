#include <stdio.h>

int main () {
    int a, b;
    for (int i = 0; i <= 3; i++) {
        scanf("%d %d", &a, &b);
        printf("%lld\n", a*b);
    }
}
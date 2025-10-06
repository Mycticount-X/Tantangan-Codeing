#include <stdio.h>

int main () {
    int test;
    long long male, female;
    scanf("%d", &test);
    for (int i = 1; i <= test; i++) {
        scanf("%lld %lld", &male, &female);
        printf("Case #%d: ", i);
        if ((male * female) % 2 == 0) {
            printf("Party time!\n");
        } else printf("Need more frogs\n");
    }
    return 0;
}
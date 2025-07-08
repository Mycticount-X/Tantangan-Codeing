#include <stdio.h>

int main () {
    int test, need, curr, shop;
    scanf("%d", &test);
    for (int i = 1; i <= test; i++) {
        scanf("%d %d %d", &need, &curr, &shop);
        printf("Case #%d: ", i);
        if (need <= (curr + shop)) {
            printf("yes\n");
        } else printf("no\n");
    }
    return 0;
}
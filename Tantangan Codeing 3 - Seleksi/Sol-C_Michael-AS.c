#include <stdio.h>

int main () {
    int test, gojo, bipay;
    scanf("%d", &test);
    for (int x = 1; x <= test; x++) {
        scanf("%d %d", &gojo, &bipay);
        printf("Case #%d: ", x);
        if (gojo > bipay) {
            printf("Go-Jo\n");
        } else printf("Bi-Pay\n");
    }
    return 0;
}
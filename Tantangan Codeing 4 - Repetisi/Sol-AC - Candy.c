#include <stdio.h>

int main() {
    int test, num, money, total, min;

    scanf("%d", &test);

    for (int t = 1; t <= test; t++) {
        scanf("%d %d", &num, &money);
        int price[num];
        for (int i = 0; i < num; i++) {
            scanf("%d", &price[i]);
        }
        
        min = price[0];
        for (int i = 0; i < num; i++) {
            if (price[i] < min) {
                    min = price[i];
            }
        }
        total = money / min;
        
        printf("Case #%d: %d\n", t, total);
    }

    return 0;
}

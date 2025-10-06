#include <stdio.h>

int main () {
    int money, cost;
    scanf("%d %d", &money, &cost);
    int buy = money / cost;
    printf("%d\n", buy);
}
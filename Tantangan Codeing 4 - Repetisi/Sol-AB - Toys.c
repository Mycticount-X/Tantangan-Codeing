#include <stdio.h>

int main () {
    int num, toy, a, b, c, d, count;
    scanf("%d", &num);
    for (int i = 1; i <= num; i++) {
        scanf("%d", &toy);
        scanf("%d %d %d %d", &a,&b,&c,&d);
        count = 0;
        for (int x = 1; x <= toy; x++) {
            if (x % a == 0 || x % b == 0 || x % c == 0 || x % d == 0) count++;
        }
        printf("Case #%d: %d\n", i, count);
    }
    return 0;
}
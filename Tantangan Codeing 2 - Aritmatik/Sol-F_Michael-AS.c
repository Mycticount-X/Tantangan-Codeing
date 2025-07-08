#include <stdio.h>

int main () {
    int sampah;
    int result[3];
    for (int i = 0; i < 3; i++) {
        int m, x;
        scanf("%d %c %d %c", &m, &sampah, &x, &sampah);
        result [i] = m + x;
    }
    for (int i = 0; i < 3; i++) {
        printf("%d\n", result[i]);
    }
}
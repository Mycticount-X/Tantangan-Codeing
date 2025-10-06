#include <stdio.h>

int main () {
    int up, down, stay, sec = 0, found = 0;
    scanf("%d %d %d", &up, &down, &stay);
    while (up <= 100 && down >= 0) {
        if (up == down && down == stay) {
            found = 1;
            break;
        }
        up++;
        down--;
        sec++;
    }
    if (found) {
        printf("%d\n", sec);
    } else {
        printf("%d\n", -1);
    }
    return 0;
}
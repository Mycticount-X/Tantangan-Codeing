#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 1; i <= T; i++) {
        int A, B;
        scanf("%d %d", &A, &B);

        int total = A;
        int empty = A; 

        while (empty >= B) {
            int newBottle = empty / B;
            empty = empty % B + newBottle;
            total += newBottle;
        }

        printf("Case #%d: %d\n", i, total);
    }

    return 0;
}

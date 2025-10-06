#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N);

        long long sum[105] = {0};

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                long long val;
                scanf("%lld", &val);
                sum[j] += val;
            }
        }

        printf("Case #%d:", t);
        for (int j = 0; j < N; j++) {
            printf(" %lld", sum[j]);
        }
        printf("\n");
    }

    return 0;
}

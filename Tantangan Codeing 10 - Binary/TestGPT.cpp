#include <stdio.h>
#include <stdlib.h>

#define N 25

// Function to compare two integers for qsort
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

void solveTestCase(int testCase, int sums[N]) {
    // Sort the array of sums
    qsort(sums, N, sizeof(int), compare);

    int M[5];
    int used[N] = {0}; // Track used elements

    // The first value is M1 + M1
    M[0] = sums[0] / 2;
    used[0] = 1; // Mark as used

    int idx = 1;
    for (int i = 1; i < N && idx < 5; i++) {
        if (used[i]) continue;

        M[idx] = sums[i] - M[0]; // Calculate Mi
        used[i] = 1;

        // Mark all pairs involving M[idx]
        for (int j = 0; j < idx; j++) {
            int pairValue = M[j] + M[idx];
            for (int k = i + 1; k < N; k++) {
                if (sums[k] == pairValue && !used[k]) {
                    used[k] = 1;
                    break;
                }
            }
        }

        idx++;
    }

    // Print the result in non-decreasing order
    printf("Case #%d: %d %d %d %d %d\n", testCase, M[0], M[1], M[2], M[3], M[4]);
}

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int sums[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &sums[i]);
        }
        solveTestCase(t, sums);
    }

    return 0;
}


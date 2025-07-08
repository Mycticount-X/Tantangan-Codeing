#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int arr[N] [N];
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    int sama = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N-1; j++) {
            for (int k = j+1; k < N; k++) {
                if (arr[i][j] == arr[i][k]) {
                    sama = 1;
                    break;
                }
            }
            if (sama) break;
        }
        if (sama) break;
    }
    
    if (!sama) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N-1; j++) {
            for (int k = j+1; k < N; k++) {
                if (arr[j][i] == arr[k][i]) {
                    sama = 1;
                    break;
                }
            }
            if (sama) break;
        }
        if (sama) break;
    }
    }
    
    if (sama) {
        printf("Nay\n");
    } else printf("Yay\n");
    
    return 0;
}
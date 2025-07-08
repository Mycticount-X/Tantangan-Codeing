#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    for (int t = 1; t <= T; t++) {
    int N;
    scanf("%d", &N);
    
    int mtx1[N][N], mtx2[N][N], mtx3[N][N], resmtx[N][N], ResMTX[N][N];
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &mtx1[i][j]);
        }
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &mtx2[i][j]);
        }
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &mtx3[i][j]);
        }
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            resmtx[i][j] = 0;
            ResMTX[i][j] = 0;
        }
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                resmtx[i][j] += mtx1[i][k] * mtx2[k][j];
            }
        }
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                ResMTX[i][j] += resmtx[i][k] * mtx3[k][j];
            }
        }
    }
    
    printf("Case #%d:\n", t);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d", ResMTX[i][j]);
            if (j < N-1) printf(" ");
        } printf("\n");
    }
    }
    
    return 0;
}
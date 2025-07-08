#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int matrix[N][N];
    int teamCount[N + 1];
    for (int i = 0; i <= N; i++) {
        teamCount[i] = 0; 
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int value;
            scanf("%d", &value);
            matrix[i][j] = value;
            if (value >= 1 && value <= N) {
                teamCount[value]++;
            }
        }
    }
    
    int incomplete = 0;
    for (int i = 1; i <= N; i++) {
        if (teamCount[i] < N) {
            incomplete++;
        }
    }
    
    printf("%d\n", incomplete);
    
    return 0;
}
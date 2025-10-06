#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    for (int t = 1; t <= T; t++) {
        int N, M, Q;
        scanf("%d %d %d", &N, &M, &Q);
        
        int patterns[N][M];
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                scanf("%d", &patterns[i][j]);
            }
        }
        
        int lights[M];
        for (int i = 0; i < M; i++) {
            lights[i] = 0;
        }
        
        for (int i = 0; i < Q; i++) {
            int friend;
            scanf("%d", &friend);
            friend--;  // Supaya jadi Indexnya start 0
            
            for (int j = 0; j < M; j++) {
                if (patterns[friend][j] == 1) {
                    lights[j] = !lights[j]; 
                }
            }
        }
        
        printf("Case #%d:\n", t);
        for (int i = 0; i < M; i++) {
            if (lights[i] == 1) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        }
    }
    
    return 0;
}
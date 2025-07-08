#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); 
    
    for (int t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N); 
        
        int numList[1000];
        for (int i = 0; i < N; i++) {
            scanf("%d", &numList[i]);
        }
        
        int coolFactor = 0;

        for (int i = 0; i < N; i++) {
            int found = 0;
            for (int j = 0; j < N; j++) {
                for (int k = 0; k < N; k++) {
                    if (j != k && j != i && k != i && (numList[j] + numList[k] == numList[i])) {
                        found = 1;
                        break;
                    }
                }
                if (found) {
                    break;
                }
            }
            if (found) {
                coolFactor++;
            }
        }
        
        printf("Case #%d: %d\n", t, coolFactor);
    }

    return 0;
}


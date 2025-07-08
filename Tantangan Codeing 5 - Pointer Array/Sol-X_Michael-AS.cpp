#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); 
    
    for (int t = 1; t <= T; t++) {
        int num, choco;
        scanf("%d %d", &num, &choco); 
        
        long long totalMax = 0;
        
        for (int i = 0; i < num; i++) {
            long long max = 0;
            
            for (int j = 0; j < choco; j++) {
                long long weight;
                scanf("%lld", &weight);
                if (weight > max) {
                    max = weight;
                }
            }
            
            totalMax += max;
        }
        
        printf("Case #%d: %lld\n", t, totalMax);
    }

    return 0;
}


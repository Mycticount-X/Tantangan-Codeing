#include <stdio.h>

int main() {
    int test; 
    scanf("%d", &test);
    
    for (int t = 1; t <= test; t++) {
        int num;
        scanf("%d", &num);
        
        long long hei[num];
        for (int i = 0; i < num; i++) {
            scanf("%lld", &hei[i]);
        }
        
        long long min_diff = 8000000000;
        for (int i = 0; i < num - 1; i++) {
            long long diff = hei[i + 1] - hei[i];
            if (diff < 0) {
                diff = -diff;
            }
            if (diff < min_diff) {
                min_diff = diff;
            }
        }

        printf("Case #%d: %lld\n", t, min_diff);
    }
    
    return 0;
}
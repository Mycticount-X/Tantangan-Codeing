#include <stdio.h>

int main() {
    int test;
    scanf("%d", &test); 
    
    for (int t = 1; t <= test; t++) {
        int food, money;
        scanf("%d %d", &food, &money); 
        
        long long total = 0;
        for (int i = 0; i < food; i++) {
            int price;
            scanf("%d", &price); 
            total += price; 
        }
        
        if (total > money) {
            printf("Case #%d: Wash dishes\n", t);
        } else {
            printf("Case #%d: No worries\n", t);
        }
    }
    
    return 0;
}
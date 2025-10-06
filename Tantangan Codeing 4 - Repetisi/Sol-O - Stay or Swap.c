#include <stdio.h>

int main() {
    int test;
    scanf("%d", &test); 
    
    for (int t = 1; t <= test; t++) {
        int jumlah, max, self;
        scanf("%d %d %d", &jumlah, &max,&self);
        
        int piring;
        for (int i = 1; i <= jumlah; i++) {
            scanf("%d", &piring);
            if (piring > self && piring <= max) {
                self = piring;
            }
            
        }
        printf("Case #%d: %d\n", t, self);
    }
    
    return 0;
}
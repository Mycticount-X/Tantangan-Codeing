#include <stdio.h>

int main() {
    int test;
    scanf("%d", &test); 
    
    for (int t = 1; t <= test; t++) {
        int buy, bonus, total, empty;
        scanf("%d %d", &buy, &bonus);
        total = buy;
        empty = buy;
        while (empty >= bonus) {
            int new = empty / bonus;
            total += new;
            empty = new + (empty % bonus);
        }
        printf("Case #%d: %d\n", t, total);
        
    }
    
    return 0;
}
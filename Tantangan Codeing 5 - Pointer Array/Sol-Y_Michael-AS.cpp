#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);
    
    for (int t = 1; t <= T; t++) {
        int swap;
        char str[1002];
        
        scanf("%d %s", &swap, str);
        
        for (int i = 0; i < swap; i++) {
            int from, to;
            scanf("%d %d", &from, &to);
            from--; to--; 
            
            while (from < to) {
                char temp = str[from];
                str[from] = str[to];
                str[to] = temp;
                from++;
                to--;
            }
        }
        
        printf("Case #%d: %s\n", t, str);
    }
    
    return 0;
}


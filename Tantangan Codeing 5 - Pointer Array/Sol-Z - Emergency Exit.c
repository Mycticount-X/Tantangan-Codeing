#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);
    
    for (int t = 1; t <= T; t++) {
        int len, breath;
        scanf("%d %d", &len, &breath);
        
        char str[len+2];
        scanf("%s", str);
        
        if (len <= breath) {
            printf("Case #%d: Alive\n", t);
            continue;
        }
        
        int escape = 0;
        int first = -1, last = -1;
        for (int i = 0; i < len; i++) {
            if (str[i] == '1') {
                if (first == -1) first = i;
                last = i;
            }
        }
        
        // Sudah pasti mati karena if (len <= breath) sudah False
        if (first == last) {
            printf("Case #%d: Dead\n", t);
            continue;
        } else {
            escape = (breath > first) && (breath > len - last - 1);
        }
        
        if (escape) printf("Case #%d: Alive\n", t);
        else printf("Case #%d: Dead\n", t);
    }
    
    return 0;
}
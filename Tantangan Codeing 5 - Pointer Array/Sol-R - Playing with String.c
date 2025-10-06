#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);
    
    for (int t = 1; t <= T; t++) {
        char str[1001];
        scanf("%s", str);
        
        int num;
        scanf("%d", &num);
        
        for (int i = 0; i < num; i++) {
            char from, to;
            scanf(" %c %c", &from, &to);
            
            for (int j = 0; j < strlen(str); j++) {
                if (str[j] == from) {
                    str[j] = to;
                }
            }
        }
        
        printf("Case #%d: %s\n", t, str);
    }
    
    return 0;
}
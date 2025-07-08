#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    for (int t = 1; t<= T; t++) {
        int ing;
        scanf("%d", &ing);
        int need[ing];
        int curr[ing];
        for (int i = 0; i < ing; i++) {
            scanf("%d", &need[i]);
        } for (int i = 0; i < ing; i++) {
            scanf("%d", &curr[i]);
        }
        printf("Case #%d:", t);
        for (int i = 0; i < ing; i++) {
            printf(" %d", need[i] -curr[i]);
        } printf("\n");
        
        
    }

    return 0;
}

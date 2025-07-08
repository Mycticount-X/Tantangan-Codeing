#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i< N; i++) {
        scanf("%d", &arr[i]);
    }
    
    int T;
    scanf("%d", &T);
    for (int t = 1; t<= T; t++) {
        int idx, chg;
        scanf("%d %d", &idx, &chg);
        arr[idx - 1] = chg;
        
        printf("Case #%d:", t);
        for (int i = 0; i < N; i++) {
            printf(" %d", arr[i]);
        } printf("\n");
        
        
    }

    return 0;
}


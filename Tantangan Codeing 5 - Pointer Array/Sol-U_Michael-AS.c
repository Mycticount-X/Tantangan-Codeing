#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    for (int t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N);
        
        int arr[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &arr[i]);
        }
        
        int bibi, lili;
        scanf("%d %d", &bibi, &lili);
        
        if (arr[bibi-1] == arr[lili-1]) {
            printf("Case #%d : Draw\n", t);
        } else if (arr[bibi-1] > arr[lili-1]) {
            printf("Case #%d : Bibi\n", t); 
        } else if (arr[bibi-1] < arr[lili-1]) {
            printf("Case #%d : Lili\n", t);
        }
    }
    
    return 0;
}
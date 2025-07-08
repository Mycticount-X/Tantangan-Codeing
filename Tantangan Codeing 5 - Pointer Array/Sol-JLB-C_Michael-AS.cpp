#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int N, k;
        scanf("%d %d", &N, &k);
        
        int times[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &times[i]);
        }
        
        qsort(times, N, sizeof(int), compare);
        
        int opens = 0; 
        int end_time = 0; 
        
        for (int i = 0; i < N; i++) {
            if (times[i] > end_time) {
                opens++;  
                end_time = times[i] + k; 
            }
        }
        
        printf("%d\n", opens);
    }
    
    return 0;
}


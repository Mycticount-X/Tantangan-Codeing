#include <stdio.h>

long long Fibo (int n) {
    if (n <= 1) return n;
    
    long long a = 0, b = 1, c;
    
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    
    return b;
}

int main () {
    int T;
    scanf("%d", &T);
    
    for (int t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N);
        
        long long hasil = Fibo(N-1);
        
        printf("Case #%d: %lld\n", t, hasil);
    }
    return 0;
}


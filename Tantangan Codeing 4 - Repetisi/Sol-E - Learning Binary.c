#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int X, P;
        scanf("%d %d", &X, &P);
        
        // Geser X ke kanan sebanyak P bit, lalu ambil bit terakhir
        int bit = (X >> P) & 1;
        
        printf("%d\n", bit);
    }

    return 0;
}

#include <stdio.h>

int main() {
    int num, kombinasi = 0;
    
    scanf("%d", &num);
    
    for (int j = 0; j <= num; j++) {
        for (int l = 0; l <= num; l++) {
            int b = num - j - l;
            if (b >= 0) {
                kombinasi++;
            }
        }
    }
    
    printf("%d\n", kombinasi);
    
    return 0;
}
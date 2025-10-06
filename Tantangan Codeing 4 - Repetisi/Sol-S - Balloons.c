#include <stdio.h>

int main() {
    int jumlah, power;
    scanf("%d %d", &jumlah, &power); 
    
    int balon[jumlah];
    for (int t = 0; t < jumlah; t++) {
        scanf("%d", &balon[t]);
    }
    
    int count = 0;
    for (int i = 0; i < jumlah; i++) {
        if (balon[i] < power) {
            count++;
        }
    }
    
    printf("%d\n", count);
    return 0;
}
#include <stdio.h>

int main () {
    int daging, sayur, telor;
    scanf("%d %d %d", &daging, &sayur, &telor);
    
    int harga[] = {daging, sayur, telor};
    char* pos[] = {"Daging", "Sayur", "Telur"};
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2 - i; j++) {
            if (harga[j] < harga[j + 1]) {
                int temp = harga[j];
                harga[j] = harga[j + 1];
                harga[j + 1] = temp;
                
                char* posTemp = pos[j];
                pos[j] = pos[j + 1];
                pos[j + 1] = posTemp;
            }
        }
    }
    
    printf("%s\n%s\n%s\n", pos[0], pos[1], pos[2]);
    return 0;
}
#include <stdio.h>

int main() {
    
    int T;
    scanf("%d", &T);
    for (int t = 1; t<= T; t++) {
        int sisi;
        scanf("%d", &sisi);
        int arr[sisi][sisi];
        for (int i = 0; i < sisi; i++) {
            for (int j = 0; j < sisi; j++) {
                scanf("%d", &arr[i][j]);
            }
        }
        
        long long summa[sisi];
        for (int i = 0; i < sisi; i++) {
        	summa[i] = 0;
		}
		
        for (int j = 0; j < sisi; j++) {
            for (int i = 0; i < sisi; i++) {
                summa[j] += arr[i][j];
            }
        }
        
        printf("Case #%d:", t);
        for (int i = 0; i < sisi; i++) {
            printf(" %lld", summa[i]);
        } printf("\n");
    }

    return 0;
}
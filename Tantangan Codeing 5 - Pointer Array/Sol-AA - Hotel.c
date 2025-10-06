#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    long long temp;
    long long room[N];
    int happy = 0;
    
    for (int i = 0; i < N; i++) {
        scanf("%lld", &temp);
        
        int terisi = 0;
        for (int x = 0; x < happy; x++) {
            if (room [x] == temp) {
                terisi = 1;
                break;
            }
        }
        if (!terisi) {
            room[happy] = temp;
            happy++;
        }
    }
    
    printf("%d\n", happy);
    
    return 0;
}
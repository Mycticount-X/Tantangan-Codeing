#include <stdio.h>

int main() {
    
    int T;
    scanf("%d", &T);
    for (int t = 1; t <= T; t++) {
        int num;
        scanf("%d", &num);
        int arr[num];
        for (int i = 0; i < num; i++) {
            scanf("%d", &arr[i]);
        }
        
        long long max1 = -1000000001;
        long long max2 = -1000000001;

        for (int i = 0; i < num; i++) {
            if (arr[i] > max1) {
                max2 = max1;
                max1 = arr[i];
            } else if (arr[i] > max2) {
                max2 = arr[i];
            }
        }
        
        long long result = max1 + max2;
        printf("Case #%d: %lld\n", t, result);
    }

    return 0;
}


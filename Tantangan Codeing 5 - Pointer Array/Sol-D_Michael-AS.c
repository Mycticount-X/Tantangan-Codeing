#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    int arr[x][y];
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    int T;
    scanf("%d", &T);
    for (int t = 1; t<= T; t++) {
        int xc, yc, chg;
        scanf("%d %d %d", &xc, &yc, &chg);
        arr[xc-1][yc-1] = chg;
    }
    
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            printf("%d", arr[i][j]);
            if (j < y-1) printf(" ");
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int line;
    scanf("%d", &line);
    double result[line];
    for (int i = 0; i < line; i++) {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        double total = (2.0 * a / 1) + (4.0 * b / 2) + (4.0 * c / 3) + (2.0 * d / 4);
        result[i] = total;
    }
    
    for (int i = 0; i < line; i++) {
        printf("%.2lf\n", result[i]);
    }
    return 0;
}

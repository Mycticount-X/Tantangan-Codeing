#include <stdio.h>

int main () {
    int now, total;
    scanf("%d %d", &now, &total);
    double persen = 100.0*now / total;
    printf("%.2lf%%\n", persen);
    return 0;
}
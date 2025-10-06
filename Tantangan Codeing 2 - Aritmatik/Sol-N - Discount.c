#include <stdio.h>

int main () {
    int a, b;
    scanf("%d %d", &a, &b);
    double persen = 100.0*(a-b)/ a;
    printf("%.2lf%%\n", persen);
    return 0;
}
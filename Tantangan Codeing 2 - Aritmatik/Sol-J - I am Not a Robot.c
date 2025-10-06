#include <stdio.h>

int main () {
    int total, robot;
    scanf("%d %d", &total, &robot);
    double persen = (double)robot/total*100;
    printf("%.4lf%%\n", persen);
}
#include <stdio.h>

int main () {
    int Phys, Magi, True;
    scanf("%d %d %d", &Phys, &Magi, &True);
    double DMG = 0.2*Phys + 0.3*Magi + 0.5*True;
    printf("%.2lf\n", DMG);
}
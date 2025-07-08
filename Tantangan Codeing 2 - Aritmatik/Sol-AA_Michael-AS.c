#include <stdio.h>

int main () {
    int Assign, Mid, Fin;
    scanf("%d %d %d", &Assign, &Mid, &Fin);
    double Skor = 0.2*Assign + 0.3*Mid + 0.5*Fin;
    printf("%.2lf\n", Skor);
}
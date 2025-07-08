#include <stdio.h>

int main () {
    int line;
    scanf("%d", &line);
    for (int i = 0; i < line; i++){
        int persen, angka;
        scanf("%d %d", &persen, &angka);
        double skor = (double)persen/100 * angka;
        printf("%.2lf\n", skor);
    }
}

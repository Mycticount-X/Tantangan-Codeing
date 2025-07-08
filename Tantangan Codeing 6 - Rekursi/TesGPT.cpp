#include <stdio.h>

char x_start, x_end, y_start, y_end;
char map[9][9];
int move;
int correct;

void checkwhite(int move, int x, int y) {
    if (map[x][y] == '\0' || x > 8 || y > 8 || x < 0 || y < 0 || move < 0) {
        return;
    }
    if (map[x][y] == '#') {
        correct = 1;
        return;
    }

    move--;

    checkwhite(move, x - 1, y - 2);
    checkwhite(move, x - 1, y + 2);
    checkwhite(move, x + 1, y - 2);
    checkwhite(move, x + 1, y + 2);
    checkwhite(move, x + 2, y + 1);
    checkwhite(move, x + 2, y - 1);
    checkwhite(move, x - 2, y + 1);
    checkwhite(move, x - 2, y - 1);
}

void checkblack(int move, int x, int y) {
    if (map[x][y] == '\0' || x > 8 || y > 8 || x < 0 || y < 0 || move < 0 || map[x][y] == '#') {
        return;
    }
    map[x][y] = '#';

    move--;

    checkblack(move, x - 1, y - 2);
    checkblack(move, x - 1, y + 2);
    checkblack(move, x + 1, y - 2);
    checkblack(move, x + 1, y + 2);
    checkblack(move, x + 2, y + 1);
    checkblack(move, x + 2, y - 1);
    checkblack(move, x - 2, y + 1);
    checkblack(move, x - 2, y - 1);
}

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        scanf("%d", &move);
        char black[3], white[3];

        // Inisialisasi peta 8x8 dengan karakter '.'
        for (int j = 0; j < 8; j++) {
            for (int k = 0; k < 8; k++) {
                map[j][k] = '.';
            }
        }

        // Baca posisi bidak hitam dan putih
        scanf("%s %s", black, white);

        x_start = 8 - (black[1] - '0');
        x_end = 8 - (white[1] - '0');
        y_start = black[0] - 'A';
        y_end = white[0] - 'A';

        checkblack(move, x_start, y_start);
        checkwhite(move, x_end, y_end);

        if (correct == 1) {
            printf("Case #%d: YES\n", i + 1);
        } else {
            printf("Case #%d: NO\n", i + 1);
        }

        // Reset variabel untuk iterasi berikutnya
        x_start = 0;
        x_end = 0;
        y_start = 0;
        y_end = 0;
        correct = 0;

        // Reset peta
        for (int j = 0; j < 9; j++) {
            for (int k = 0; k < 9; k++) {
                map[j][k] = '\0';
            }
        }
    }

    return 0;
}



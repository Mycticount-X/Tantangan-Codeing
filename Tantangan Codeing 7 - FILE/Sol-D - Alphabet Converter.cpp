#include <stdio.h>
#include <string.h>

int main() {
    FILE *file = fopen("testdata.in", "r");
    if (!file) return 1;
    
    int done[30] = {0};
    int counter[30] = {0};
    char from[30], to[30];

    int T;
    fscanf(file, "%d\n", &T);

    for (int t = 0; t < T; t++) {
        char str[110];
        if (fscanf(file, "%[^\n]\n", str) != 1) break;

        int P;
        fscanf(file, "%d\n", &P);

        memset(done, 0, sizeof(done));
        memset(counter, 0, sizeof(counter));

        int chgcount = 0;
        for (int p = 0; p < P; p++) {
            char tfrom, tto;
            fscanf(file, " %c %c\n", &tfrom, &tto);

            int index = tfrom - 'A';
            if (done[index] == 0) {
                from[chgcount] = tfrom;
                to[chgcount] = tto;
                done[index] = 1;
                chgcount++;
            }
        }

        int len = strlen(str);
        for (int i = 0; i < chgcount; i++) {
            for (int j = 0; j < len; j++) {
                if (str[j] == from[i]) str[j] = to[i];
            }
        }

        for (int i = 0; i < len; i++) {
            int index = str[i] - 'A';
            counter[index]++;
        }

        for (int i = 0; i < 26; i++) {
            if (counter[i] > 0) {
                printf("%c %d\n", 'A' + i, counter[i]);
            }
        }
    }

    fclose(file);
    return 0;
}


#include <stdio.h>
#include <string.h>


typedef struct {
    char friendName[41];
    char treeName[41];
} Record;

int main() {
    FILE *file = fopen("testdata.in", "r");
    if (file == NULL) {
        printf("Error\n"); // Cuma buat ngetes
        return 1;
    }

    int N, T;
    Record records[100];
    char testCases[100][100];

    fscanf(file, "%d\n", &N);

    for (int i = 0; i < N; i++) {
        fscanf(file, "%[^#]#%[^\n]\n", records[i].friendName, records[i].treeName);
    }

    fscanf(file, "%d\n", &T);

    for (int i = 0; i < T; i++) {
        fscanf(file, "%[^\n]\n", testCases[i]);
    }

    fclose(file);

    for (int i = 0; i < T; i++) {
        int found = 0;
        for (int j = 0; j < N; j++) {
            if (strcmp(testCases[i], records[j].friendName) == 0) {
                printf("Case #%d: %s\n", i + 1, records[j].treeName);
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("Case #%d: N/A\n", i + 1);
        }
    }

    return 0;
}


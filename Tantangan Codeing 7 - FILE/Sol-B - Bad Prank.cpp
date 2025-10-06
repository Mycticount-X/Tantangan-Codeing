#include <stdio.h>
#include <string.h>

int isAlpha (char c) {
	if (c >= 'A' && c <= 'Z') {
		return 2;
	} else if (c >= 'a' && c <= 'z') {
		return 1;
	} return 0;
}

void NumConvert(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        switch (str[i]) {
            case '0': str[i] = 'O'; break;
            case '1': str[i] = 'I'; break;
            case '3': str[i] = 'E'; break;
            case '4': str[i] = 'A'; break;
            case '5': str[i] = 'S'; break;
            case '6': str[i] = 'G'; break;
            case '7': str[i] = 'T'; break;
            case '8': str[i] = 'B'; break;
        }
    }
}

void Dekripsi(char *encrypted, int shift, char *decrypted) {
    int i = 0;
    while (encrypted[i] != '\0') {
        char ch = encrypted[i];
        if (isAlpha(ch)) {
            char base = (isAlpha(ch) == 2) ? 'A' : 'a';
            decrypted[i] = (ch - base - shift + 26) % 26 + base;
        } else {
            decrypted[i] = ch;
        }
        i++;
    }
    decrypted[i] = '\0';
}

int main() {
    FILE *file = fopen("testdata.in", "r");
    if (file == NULL) {
        printf("Error: Tes Mycticount Xeta Ahlovely\n");
        return 1;
    }

    int T;
    fscanf(file, "%d\n", &T);

    for (int t = 1; t <= T; t++) {
        int shift;
        char encrypted[1003];
        char decrypted[1003];

        fscanf(file, "%d\n", &shift);
        fscanf(file, "%[^\n]\n", encrypted);

		NumConvert(encrypted);
        Dekripsi(encrypted, shift, decrypted);

        printf("Case #%d: %s\n", t, decrypted);
    }

    fclose(file);
    return 0;
}


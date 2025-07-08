#include <stdio.h>
#include <string.h>

int main() {
    FILE *file = fopen("testdata.in", "r");
    if (file == NULL) {
        printf("Error\n");
        return 1;
    }

    int T;
    fscanf(file, "%d\n", &T);

    for (int t = 1; t <= T; t++) {
        char input[101];
        int n;
        char substitutions[26][2];

        fscanf(file, "%s\n", input);
        fscanf(file, "%d\n", &n);
		
		char from, to;
		
        for (int i = 0; i < n; i++) {
            fscanf(file, " %c %c\n", &from, &to);
        }

        printf("Case #%d:\n", t);
        Process(input, n, substitutions);
    }

    fclose(file);
    return 0;
}


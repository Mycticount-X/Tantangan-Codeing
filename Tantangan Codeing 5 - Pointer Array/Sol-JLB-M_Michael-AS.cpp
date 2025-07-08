#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return ((int*)a)[1] - ((int*)b)[1];
}

int main() {
    char names[12] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L'};
    int volumes[12] = {1, 2, 3, 5, 12, 13, 17, 24, 31, 35, 49, 50};
    int n = 12;

    while (n > 1) {
        qsort(volumes, n, sizeof(int), compare);
        if (volumes[0] > volumes[1]) {
            int temp = volumes[0];
            volumes[0] = volumes[1];
            volumes[1] = temp;
            char temp_name = names[0];
            names[0] = names[1];
            names[1] = temp_name;
        }

        volumes[1] = volumes[0] + volumes[1];
        names[1] = volumes[0] > volumes[1] ? names[0] : names[1];
        for (int i = 2; i < n; i++) {
            volumes[i - 1] = volumes[i];
            names[i - 1] = names[i];
        }
        n--;
    }

    printf("%c\n", names[0]);
    return 0;
}


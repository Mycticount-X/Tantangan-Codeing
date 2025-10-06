#include <stdio.h>

int main () {
    int test;
    char a, b, c;
    scanf("%c %c %c", &a, &b, &c);
    char letter[3] = {a, b, c};
    int pos[3] = {1, 2, 3};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2 - i; j++) {
            if (letter[j] < letter[j + 1]) {
                char temp = letter[j];
                letter[j] = letter[j+1];
                letter[j+1] = temp;
                
                int posTemp = pos[j];
                pos[j] = pos[j+1];
                pos[j+1] = posTemp;
            }
        }
    }
    
    printf("%d %d %d\n", pos[2], pos[1], pos[0]);
    return 0;
}
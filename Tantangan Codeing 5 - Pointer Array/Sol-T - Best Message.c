#include <stdio.h>
#include <string.h>

int vowelValidator(char ch) {
    return (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}

int vowelNearValidator(char ch) {
    if (ch > 'U')  return 'U';
    else if (ch > 'O')  return 'O';
    else if (ch > 'I')  return 'I';
    else if (ch > 'E')  return 'E';
    else return 'A';
}

int distValidator(char ch) {
    char vow = vowelNearValidator(ch);
    return ch - vow;
}

int main() {
    int T;
    scanf("%d", &T);
    
    for (int t = 1; t <= T; t++) {
        char str[1002];
        scanf("%s", str);
        int len = strlen(str);
        
        char encrypt[1002];
        int key[1002];
        for (int i = 0; i < len; i++) {
            if (vowelValidator(str[i])) {
                encrypt[i] = str[i];
                key[i] = 0;
            } else {
                encrypt[i] = vowelNearValidator(str[i]);
                key[i] = distValidator(str[i]);
            }
        }
        
        printf("Case #%d:\n", t);
        for (int i = 0; i < len; i++) {
            printf("%c", encrypt[i]);
        } printf("\n");
        for (int i = 0; i < len; i++) {
            printf("%d", key[i]);
        } printf("\n");
    }
    
    return 0;
}
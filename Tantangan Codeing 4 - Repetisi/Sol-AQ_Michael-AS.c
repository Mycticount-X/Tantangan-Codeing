#include <stdio.h>
#include <string.h>

int validator(char *string) {
    int len = strlen(string); 
    int digit_count = 0;
    int dot_count = 0;
    
    if (string[0] == '.' || string[len - 1] == '.') {
        return 0;
    }
    
    for (int i = 0; i < len; i++) {
        char ch = string[i];
        if (ch >= '0' && ch <= '9') {
            digit_count++;
        }
        else if (ch == '.') {
            dot_count++;
            if (i > 0 && string[i-1] == '.') {
                return 0;
            }
        }
        else {
            return 0;
        }
    }
    
    return (dot_count == 5);
}

int main () {
    int test;
    scanf("%d", &test);
    
    for (int t = 1; t <= test; t++) {
        char string[102];
        scanf("%s", string); 
        
        int valid = validator(string);
        if (valid) {
            printf("Case #%d: YES\n", t);
        } else {
            printf("Case #%d: NO\n", t);
        }
    }
    return 0;
}


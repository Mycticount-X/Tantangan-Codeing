#include <stdio.h>
#include <string.h>

int main() {
    
    int T;
    scanf("%d", &T);
    for (int t = 1; t<= T; t++) {
        char str[1002];
        scanf("%s", str);
        
        int len = strlen(str);
        printf("Case %d: ", t);
		for (int i = len - 1; i >= 0; i--) {
			printf("%c", str[i]);
        } printf("\n");
	}

    return 0;
}

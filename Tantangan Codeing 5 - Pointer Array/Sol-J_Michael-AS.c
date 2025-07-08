#include <stdio.h>
#include <string.h>

int main() {
    
    int T;
    scanf("%d", &T);
    for (int t = 1; t<= T; t++) {
        char str[1002];
        scanf("%s", str);
        
        int len = strlen(str);
        int alfa[len];
		for (int i = 0; i < len; i++) {
        	alfa[i] = str[i];
		}
		
        printf("Case %d: ", t);
		for (int i = 0; i < len; i++) {
			if (i != 0) printf("-");
			printf("%d", alfa[i]);
        } printf("\n");
	}

    return 0;
}

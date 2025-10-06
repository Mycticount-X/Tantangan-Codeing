#include <stdio.h>

int main () {
	int test;
	scanf("%d", &test);
	
	for (int t = 1; t <= test; t++) {
	    int len, plus;
	    scanf("%d %d", &len, &plus);
	    char string[len + 2];
		scanf("%s", string);
		
        char result[len + 2];
        for (int i = 0; i < len; i++) {
            int temp = string[i] - 'a';
            temp = (temp + plus) % 26;
            result[i] = temp + 'a';
        }
        
        result[len] = '\0';
        printf("Case #%d: %s\n", t, result);
	}
	return 0;
}
    
#include <stdio.h>

int main () {
	int test;
	scanf("%d", &test);
	
	for (int t = 1; t <= test; t++) {
	    int len;
	    scanf("%d", &len);
	    char string[102];
		scanf(" %[^\n]", string);
		
		char result[102];
		int counter = 0;
		for (int i = 0; i < len; i++) {
		    if (string[i] >= 'a' && string[i] <= 'z') {
		        result[counter++] = string[i];
		    }
		}
        result[counter] = '\0';
        printf("Case #%d: %s\n", t, result);
	}
	return 0;
}
    
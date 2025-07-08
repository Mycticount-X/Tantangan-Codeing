#include <stdio.h>

int main () {
	int T;
	scanf("%d", &T);
	while (T--) {
		int len, a, b;
		scanf("%d %d %d", &len, &a, &b); getchar();
		char str[len+2];
		scanf(" %[^\n]", str);
		for (int i = 1; i <= len; i++) {
			if (i % a == 0 || i % b == 0) {
				if (str[i-1] >= 'a' && str[i-1] <= 'z') {
					str[i-1] -= 32;
				}
			}
		}
		printf("%s\n", str);
	}
	return 0;
}

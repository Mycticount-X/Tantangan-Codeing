#include <stdio.h>

int main () {
	int c; char str[100];
	scanf("%d %s", &c, str);
	for (int i = 0; i < c; i++) {
		printf("%s\n", str);
	}
	return 0;
}

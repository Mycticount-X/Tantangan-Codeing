#include <stdio.h>
#include <string.h>

void RekursiInvers (char* str, int start, int end) {
	if (start >= end) return;
	
	char temp = str[start];
	str[start] = str[end];
	str[end] = temp;
	
	RekursiInvers(str, start + 1, end - 1);
}

int main () {
	int T;
	scanf("%d", &T);
	for (int t = 1; t <= T; t++) {
		char str[1002];
		scanf(" %[^\n]", str);
		RekursiInvers (str, 0, strlen(str) - 1);
		printf("Case #%d: %s\n", t, str);
	}
	return 0;
}

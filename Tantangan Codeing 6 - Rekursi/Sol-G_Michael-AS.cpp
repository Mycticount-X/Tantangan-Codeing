#include <stdio.h>
#include <string.h>

int rPalin (char* str, int start, int end) {
	if (start >= end) return 1;
	
	if (str[start] != str[end]) return 0;
	
	return rPalin(str, start + 1, end - 1);
}

int main () {
	int T;
	scanf("%d", &T);
	for (int t = 1; t <= T; t++) {
		char str[1002];
		scanf("%s", str);
		int isPalindrome = rPalin(str, 0, strlen(str) - 1);
		if (isPalindrome) printf("Case #%d: yes\n", t);
		else printf("Case #%d: no\n", t);
	}
	return 0;
}

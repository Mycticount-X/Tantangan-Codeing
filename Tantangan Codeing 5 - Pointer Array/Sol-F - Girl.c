#include <stdio.h>
#include <string.h>

int main () {
	int T;
    scanf("%d", &T);
    for (int t = 1; t<= T; t++) {
    	char name[100005];
		scanf("%s", name);
		
		int len = strlen(name);
		int present[30] = {0};
		int unik = 0;
		for (int i = 0; i < len; i++) {
			int index = name[i] - 'a';
			if(!present[index]) {
				present[index] = 1;
				unik++;
			}
		}
		if (unik % 2 == 0) printf("Case #%d: Yay\n", t);
		else printf("Case #%d: Ewwww\n", t);
	}
	return 0;
}

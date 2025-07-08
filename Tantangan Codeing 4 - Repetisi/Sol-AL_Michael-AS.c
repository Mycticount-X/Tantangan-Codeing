#include <stdio.h>

int main () {
	int drag, mika;
	scanf("%d %d", &mika, &drag);
	
	int True = 1;
	int weapon[mika], blast[drag];
	int max = 0;
	for (int i = 0; i < mika; i++) {
		scanf("%d", &weapon[i]);
		if (max < weapon[i]) max = weapon[i];
	}
	for (int i = 0; i < drag; i++) {
		scanf("%d", &blast[i]);
		if (max <= blast[i]) {
			True = 0;
			break;
		}
	}
	
	
	if (True) {
		printf("The dark secret was true\n");
	} else printf("Secret debunked\n");
	
	return 0;
}

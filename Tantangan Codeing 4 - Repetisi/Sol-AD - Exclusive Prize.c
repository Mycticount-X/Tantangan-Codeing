#include <stdio.h>

int main () {
	int num;
	scanf("%d", &num);
	
	int array[num];
	int freq[1002] = {0};
	int maxfreq = 0;
	for (int i = 0; i < num; i++) {
		scanf("%d", &array[i]);
		freq[array[i]]++;
		if (freq[array[i]] > maxfreq) maxfreq = freq[array[i]];
	}
	printf("%d\n", maxfreq);
	
	return 0;
}

#include <stdio.h>

int main () {
	int test;
	scanf("%d", &test);
	
	for (int t = 1; t <= test; t++) {
		int num;
		scanf("%d", &num);
		
		int arr[num];
		for (int i = 0; i < num; i++) {
			scanf("%d", &arr[i]);
		}
		
		
		int threeOn = 0;
	    int notThreeOn = 0;
		for (int i = 0; i < num; i++) {
			for (int j = i + 1; j < num; j++) {
				int eksor = arr[i] ^ arr[j];
				int count = 0;
				while (eksor > 0) {
					count += (eksor & 1);
					eksor >>= 1;
				}
				
				if (count >= 3) {
					threeOn++;
				} else notThreeOn++;
			}
		}
		
		printf("Case #%d: %d %d\n", t, threeOn, notThreeOn);
	}
	return 0;
}

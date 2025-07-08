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
		
		
		printf("Case #%d: %d\n", t, count);
	}
	return 0;
}

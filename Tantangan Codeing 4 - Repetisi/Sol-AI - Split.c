#include <stdio.h>

int main () {
	int test = 3;
	scanf("%d", &test);
	for (int i = 1; i <= test; i++) {
		scanf("%d", &num);
		int arr[num];
		int sum = 0;
		
		for (int x = 0; x < num; x++) {
			scanf("%d", &arr[x]);
			sum += arr[x];
		}
		
		if (sum % 2 != 0) {
			printf("Case #%d: No\n", i);
			continue;
		}
		int left = 0, half = sum / 2, found = 0;
		
		for (int x = 0; x < num; x++) {
			left += arr[x];
			if (left == half){
				found = 1;
				break;
			}
		}
		printf("Case #%d: ", i);
		if (found) printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}

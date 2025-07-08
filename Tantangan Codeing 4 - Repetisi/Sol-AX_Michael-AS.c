#include <stdio.h>

int main () {
	int num;
	scanf("%d", &num);
	
    long long profit = 0;
	for (int t = 0; t < num; t++) {
		int temp;
        scanf("%d", &temp);
        if (temp > 0) {
            profit += temp;
        }
	}
    printf("%lld\n", profit);
	return 0;
}

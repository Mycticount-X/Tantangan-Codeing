#include <stdio.h>

int main () {
	int T;
	scanf("%d", &T);
	
	for (int t = 1; t <= T; t++) {
		int N; long long maxtarg;
		scanf("%d %lld", &N, &maxtarg);
		
		long long arr[N];
		for (int i = 0; i < N; i++) {
			scanf("%lld", &arr[i]);
		}
		
		long long sum = 0;
		int left = 0, maxlen = -1;
		
		for (int right = 0; right < N; right++) {
			sum += arr[right];
			
			while (sum > maxtarg && left <= right) {
				sum -= arr[left];
				left++;
			}
			
			if (sum <= maxtarg) {
				int currlen = right - left + 1;
				if (currlen > maxlen) maxlen = currlen;
			}
		}
		
		if (!maxlen) maxlen = -1;
		
		printf("Case #%d: %d\n", t, maxlen);
	}
	
	return 0;
}

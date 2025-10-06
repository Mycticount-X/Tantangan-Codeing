#include <stdio.h>
#include <stdlib.h>

int MaxDiff(int arr[], int len) {
	for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    int maxdiff = 0;
    int split = len / 2;
    for (int i = 1; i < len; i++) {
    	if (i == split) {
    		continue;
		}
    	
        int diff = arr[i] - arr[i - 1];
        if (diff > maxdiff) {
            maxdiff = diff;
        }
    }

    return maxdiff;
}

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int n;
        scanf("%d", &n);

        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        int result = MaxDiff(arr, n);

        printf("Case #%d: %d\n", t, result);
    }

    return 0;
}


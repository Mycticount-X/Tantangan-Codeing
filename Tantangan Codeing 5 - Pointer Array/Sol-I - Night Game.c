#include <stdio.h>

int main() {
    
    int T;
    scanf("%d", &T);
    for (int t = 1; t<= T; t++) {
        int num;
        scanf("%d", &num);
        int arr[num];
        for (int i = 0; i < num; i++) {
        	scanf("%d", &arr[i]);
		}
    	
    	printf("Case #%d:", t);
		for (int i = num - 1; i >= 0; i--) {
			printf(" %d", arr[i]);
		} printf("\n");
		    
    }

    return 0;
}

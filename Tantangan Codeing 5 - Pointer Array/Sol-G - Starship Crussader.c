#include <stdio.h>

int main () {
	int T;
    scanf("%d", &T);
    for (int t = 1; t<= T; t++) {
    	int tes;
    	scanf("%d", &tes);
    	
    	int result[tes];
    	int needed[tes];
    	
    	for (int i = 0; i < tes; i++) {
    		scanf("%d", &result[i]);
		}
    	
    	for (int i = 0; i < tes; i++) {
    		scanf("%d", &needed[i]);
		}
    	
    	int success = 0;
		for (int i = 0; i < tes; i++) {
    		if(needed[i] <= result[i]) success++;
		}
		
		printf("Case #%d: %d\n", t, tes - success);
	}
	return 0;
}

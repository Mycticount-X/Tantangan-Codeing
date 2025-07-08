#include <stdio.h>

int main () {
    int num;
	scanf("%d", &num);
	
    int view[num];
	for (int t = 0; t < num; t++) {
		scanf("%d", &view[t]);
		
    }

	int test;
	scanf("%d", &test);
	for (int t = 1; t <= test; t++) {
		int case1, case2;
		scanf("%d %d", &case1, &case2);
        
        int views = 0;
        for (int i = case1 - 1; i < case2; i++) {
            views += view[i];
		}
		printf("Case #%d: %d\n", t, views);
	}
	return 0;
}

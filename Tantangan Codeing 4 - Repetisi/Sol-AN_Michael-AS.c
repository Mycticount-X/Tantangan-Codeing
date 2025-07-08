#include <stdio.h>

int main () {
	int test;
	scanf("%d", &test);
	
	for (int t = 1; t <= test; t++) {
		int a,s,h,ii,x,p;
		scanf("%d %d %d %d %d %d", &a,&s,&h,&ii,&x,&p);
		
		printf("Case #%d: ", t);
        for (int i = 0; i < a; i++) {
            printf("a");
        }
        for (int i = 0; i < s; i++) {
            printf("s");
        }
        for (int i = 0; i < h; i++) {
            printf("h");
        }
        for (int i = 0; i < ii; i++) {
            printf("i");
        }
        for (int i = 0; i < x; i++) {
            printf("a");
        }
        for (int i = 0; i < p; i++) {
            printf("p");
        }
        printf("\n");
        
	}
	return 0;
}
    
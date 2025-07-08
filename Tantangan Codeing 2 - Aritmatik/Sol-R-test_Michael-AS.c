#include <stdio.h>

int main() {
    char expr[100]; 
    int A, B, C, D;
	int result[3];
	
    for (int i = 0; i < 3; i++) {
        scanf("%s", expr);
        sscanf(expr, "(%d+%d)x(%d-%d)", &A, &B, &C, &D);
        result[i] = (A + B) * (C - D);
    }

	printf("%d %d %d\n", result[0], result[1], result[2]);
    return 0;
}


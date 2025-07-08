#include <stdio.h>

int main () {
	int num;
	scanf("%d", &num);
	
	for (int i = 0; i < num; i++) {
		int match;
        scanf("%d", &match); getchar();
        char win[match + 2];
        scanf("%s", win);
        
        int bibi = 0, lili = 0;
        for (int x = 0; x < match; x++) {
            if (win[x] == 'B') bibi++;
            else if (win[x] == 'L') lili++;
        }
        
        if (bibi == lili) printf("None\n");
        else if (bibi > lili) printf("Bibi\n");
        else if (lili > bibi) printf("Lili\n");
	}
	
	return 0;
}

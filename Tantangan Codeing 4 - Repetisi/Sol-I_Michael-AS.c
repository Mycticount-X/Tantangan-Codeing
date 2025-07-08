#include <stdio.h>

int main () {
	int all;
	double jojo, lili, bibi;
	scanf("%d", &all);
	scanf("%lf %lf %lf", &jojo, &lili, &bibi);
	
	int skor;
	int summa = jojo + lili + bibi;
	int player = 3 + all;
	
	for (int i = 0; i < all; i++) {
		scanf("%d", &skor);
		summa += skor;
	}
	
	double mean = (double)summa / player;
	if (jojo >= mean) printf("Jojo lolos\n");
	else printf("Jojo tidak lolos\n");
	
	if (lili >= mean) printf("Lili lolos\n");
	else printf("Lili tidak lolos\n");
	
	if (bibi >= mean) printf("Bibi lolos\n");
	else printf("Bibi tidak lolos\n");
	
	
	return 0;
}

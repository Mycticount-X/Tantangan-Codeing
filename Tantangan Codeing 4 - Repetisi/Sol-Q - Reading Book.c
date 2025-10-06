#include <stdio.h>

int main () {
	int test;
	long long num, target, depan, belakang, shot;
	scanf("%d", &test);
	
	for (int t = 1; t <= test; t++) {
		scanf("%lld %lld", &num, &target);
		
		depan = target / 2;
		if (target % 2 == 1 && num % 2 == 0)belakang = (num - target + 1) / 2;
		else belakang = (num - target) / 2;
		
		shot = depan < belakang ? depan : belakang;
		printf("Case #%d: %lld\n", t, shot);
	}
	
	
	return 0;
}

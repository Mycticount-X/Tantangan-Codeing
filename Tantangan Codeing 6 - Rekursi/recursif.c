#include <stdio.h>
#include <string.h>

//1  2   3   4    5     6
//5 25 125 625 3125 15625
int deret5(int n){
	if(n == 1) return 5;
	return 5 * deret5(n-1);
}

long long int deret2(long long int n){
	if(n == 1) return 1;
	return 2 * deret2(n-1);
}

int count = 0;
long long int fibo(int n){
	count++;
	if(n == 0) return 0;
	else if(n == 1) return 1;
	else return fibo(n - 2) + fibo(n - 1);	
}

long long int faktorial(long long int n){
	//base case -> base knowledge
	if(n == 0 || n == 1) return 1;
	//reduction step -> rumus	
	else return n * faktorial(n - 1);
}

//precompute

int main(){
	char a[10] = "Dennise";
	int j;
	
	char nim1[11] = "1100010444", nim[11] = "2801123132";
	char nim3[11];
	
	
	for(j = 0; j < 11; j++){
		nim3[j] = ((nim1[j] - '0') + (nim2[j] - '0')) + '0';
	}
	
	for(j = strlen(a)-1; j >= 0; j--)
	printf("%c", a[j]);
	
	int deretFibo[45];
	int n, i, tc, ntc;
	
	count = 0;
	fibo(15);
	printf("%d\n", count);

	//precompute
	for(i = 1; i <= 100; i++)
		printf("%lld\n", deret2(i));
//		deretFibo[i] = fibo(i);
	
	scanf("%d", &ntc);
	for(tc = 1; tc <= ntc; tc++){
		scanf("%d", &n);
		
		printf("Case %d: %d\n", tc, deretFibo[n]);
	}
//	
//	for(i = 1; i < n; i++)
//	printf("faktorial dari %d = %lld\n", i, faktorial(i));

		
	return 0;
}

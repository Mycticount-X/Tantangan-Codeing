#include <stdio.h>
#include <math.h>

int main () {
    int round;
    scanf("%d", &round);
    long long Outcome = pow(2, round) - 1;
    printf("%lld\n", Outcome);
}
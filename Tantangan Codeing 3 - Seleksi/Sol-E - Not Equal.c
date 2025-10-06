#include <stdio.h>

int main () {
    long long a,b;
    int c,d;
    scanf("%lld %lld %d %d", &a,&b,&c,&d);
    if (a*b > c+d) printf("True\n");
    else printf("False\n");
    return 0;
}
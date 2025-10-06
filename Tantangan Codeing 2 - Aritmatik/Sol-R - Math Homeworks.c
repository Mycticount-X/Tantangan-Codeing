#include <stdio.h>

int main () {
    long long a,b,c,d;
    long long result[3];
    for (int i=0; i<3; i++) {
        scanf("(%lld+%lld)x(%lld-%lld)", &a, &b,&c,&d); getchar();
        result [i] = (a+b)*(c-d);
    }
    printf("%lld %lld %lld\n", result[0], result[1], result[2]);
    return 0;
}

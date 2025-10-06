#include<stdio.h>

int main() {
    int Num1, Num2;
    scanf("%d %d", &Num1, &Num2);
    for (int i = 0; i < Num2; i++) {
        printf("%d\n", Num1+ i);
    }
    return 0;
}

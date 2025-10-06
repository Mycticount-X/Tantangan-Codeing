#include <stdio.h>

int main() {
    int num; 
    int dice;
    int position = 0; 
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        scanf("%d", &dice);
        position += dice;
        
        if (position > 39) position -= 40;
        
        if (position == 30) position = 10;
        if (position == 35) position = 7;
        if (position == 12) position = 28;
    }

    printf("%d\n", position);

    return 0;
}
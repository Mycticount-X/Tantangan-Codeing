#include <stdio.h>

int main() {
    int num; 
    int dice;
    int position = 0; 
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        scanf("%d", &dice);
        position += dice;
        
        
        if (position == 9) position = 21;
        if (position == 33) position = 42;
        if (position == 76) position = 92;
    
        if (position == 53) position = 37;
        if (position == 80) position = 59;
        if (position == 97) position = 88;
    }

    printf("%d\n", position);

    return 0;
}
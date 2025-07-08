#include<stdio.h>

int main() {
    char id[15];
    char name[108];
    char cls;
    int num;
    
    scanf("%s\n%[^\n]\n%c %d", id, name, &cls, &num); getchar();
    
    printf("Id    : %s\n", id);
    printf("Name  : %s\n", name);
    printf("Class : %c\n", cls);
    printf("Num   : %d\n", num);
    return 0;
}

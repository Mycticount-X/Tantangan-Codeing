#include<stdio.h>

int main() {
    char Nama[108];
    char Nis[12];
    int Usia;
    
    scanf("%[^\n]", &Nama);
    scanf("%s", &Nis);
    scanf("%d", &Usia);
    
    printf("Name: %s\n", Nama);
    printf("NIS: %s\n", Nis);
    printf("Age: %d\n", Usia);
    return 0;
}

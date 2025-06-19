#include <stdio.h>

void tukar(int *a, int *b);

int main(){
    int a, b;
    printf("Masukkan Nilai a: ");
    scanf("%d", &a);
    printf("Masukkan Nilai b: ");
    scanf("%d", &b);
    printf("Nilai a sebelum ditukar : %d\n", a);
    printf("Nilai b sebelum ditukar : %d\n", b);

    tukar(&a, &b);
    printf("Nilai a setelah ditukar : %d\n", a);
    printf("Nilai b setelah ditukar : %d\n", b);


    return 0;
}

void tukar(int *a, int *b){
    int ptr;
    ptr = *a;
    *a = *b;
    *b = ptr;
}
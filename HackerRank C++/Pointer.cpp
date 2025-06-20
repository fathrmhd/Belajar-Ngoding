#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function    
    int tambah = *a + *b;
    int kurang = *a - *b;
    if (kurang < 0){
        kurang *= -1;
    }
    *a = tambah;
    *b = kurang;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

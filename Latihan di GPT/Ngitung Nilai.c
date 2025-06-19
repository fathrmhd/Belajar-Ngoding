#include <stdio.h>

int main(){
    int banyak;
    float sum=0;
    printf("Masukkan banyak mahasiswa: ");
    scanf("%d", &banyak);
    int mahasiswa[banyak];
    int max = 0;
    int min;
    
    for(int j=0; j<banyak; j++){
        printf("Masukkan nilai mahasiswa (%d): ", j+1);
        scanf("%d", &mahasiswa[j]);
    }
    min = mahasiswa[0];
    for(int i=0; i<banyak; i++){
        sum += mahasiswa[i];
        if (mahasiswa[i] < min){
            min = mahasiswa[i];
        }
        if (mahasiswa[i] > max){
            max = mahasiswa[i];
        }
    }

    float rata = (float)sum / banyak;
    printf("Ini nilai rata-ratanya %.3f\n", rata);
    printf("Ini nilai maksimumnya %d\n", max);
    printf("Ini nilai minimalnya %d\n", min);
}
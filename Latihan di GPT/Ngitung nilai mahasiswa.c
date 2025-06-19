#include <stdio.h>

int main(){
    int jumlah, matkul, min, max;
    float rata_rata;

    printf("Masukkan Jumlah Mahasiswa: ");
    scanf("%d",  &jumlah);
    printf("Masukkan Jumlah Mata Kuliah: ");
    scanf("%d", &matkul);
    int mahasiswa[jumlah][matkul];
    for(int i =0; i < jumlah; i++){
        printf("Mahasiswa %d:\n", i + 1);
        for(int j=0; j < matkul; j++){
            printf("Nilai Matkul %d: ", j + 1);
            scanf("%d", &mahasiswa[i][j]);
        }
    }
    for(int i=0; i < jumlah; i++){
        int sum=0;
        for(int j=0; j < matkul; j++){
            sum += mahasiswa[i][j];
        }
        rata_rata  = (float)sum/matkul;
        printf("Rata-rata mahasiswa %d: %.2f\n", i+1, rata_rata);
    }
    max = mahasiswa[0][0];
    min = mahasiswa[0][0];
    for(int i=0; i< jumlah; i++){
        for(int j=0; j < matkul; j++){
            if(mahasiswa[i][j] < min){
                min = mahasiswa[i][j];
            }
            if(mahasiswa[i][j] > max){
                max = mahasiswa[i][j];
            }
        }
    }
    printf("Nilai Tertinggi: %d\n", max);
    printf("Nilai Terendah: %d\n", min);
}
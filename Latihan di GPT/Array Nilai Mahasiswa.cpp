#include <iostream>
#include <string>
using namespace std;

void indeks(int nilai[], string* indeksNilai, int banyakMahasiswa);
float rataRata(int nilai[], int banyakMahasiswa);
string nilaiTertinggi(int nilai[], string nama[], int banyakMahasiswa);

int main(){
    int banyakMahasiswa; //menyimpan data banyaknya mahasiswa
    scanf("%d", &banyakMahasiswa);
    cin.ignore();
    string nama[banyakMahasiswa]; //menyimpan nama mahasiswa
    int nim[banyakMahasiswa]; //menyimpan data nim
    int nilai[banyakMahasiswa]; //menyimpan data nilai
    string indeksNilai[banyakMahasiswa]; //menyimpan data indeks nilai
    for(int i = 0; i < banyakMahasiswa; i++){
        getline(cin, nama[i]);
        scanf("%d", &nim[i]);
        scanf("%d", &nilai[i]);
        cin.ignore();
    }
    indeks(nilai, indeksNilai, banyakMahasiswa);
    printf("Daftar Mahasiswa\n");
    for(int i = 0; i < banyakMahasiswa; i++){
        printf("%d. %s - %d - %d - %s\n", i + 1, nama[i].c_str(), nim[i], nilai[i], indeksNilai[i].c_str());
    }
    float rata = rataRata(nilai, banyakMahasiswa);
    printf("Rata-rata nilai: %.2f\n", rata);
    string tinggi =  nilaiTertinggi(nilai, nama, banyakMahasiswa);
    printf("Nilai tertinggi dimiliki oleh: %s", tinggi.c_str());

    return 0;
}

void indeks(int nilai[], string* indeksNilai, int banyakMahasiswa){
    for(int i = 0; i < banyakMahasiswa; i++){
        if(nilai[i] >= 90){
            indeksNilai[i] = "A";
        }
        else if(nilai[i] >= 80){
            indeksNilai[i] = "B";
        }
        else if(nilai[i] >= 70){
            indeksNilai[i] = "C";
        }
        else{
            indeksNilai[i] = "Tidak Lulus";
        }
    }
}

float rataRata(int nilai[], int banyakMahasiswa){
    int temp = 0;
    for(int i = 0; i < banyakMahasiswa; i++){
        temp += nilai[i];
    }
    float rataan = float(temp) / float(banyakMahasiswa);
    return rataan;
}

string nilaiTertinggi(int nilai[], string nama[], int banyakMahasiswa){
    int temp = nilai[0];
    int simpan;
    for(int i = 0; i < banyakMahasiswa; i++){
        if(temp < nilai[i]){
            temp = nilai[i];
            simpan = i;
        }
    }
    string tertinggi = nama[simpan];
    return tertinggi;
}
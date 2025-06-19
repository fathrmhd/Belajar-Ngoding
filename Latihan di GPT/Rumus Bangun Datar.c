#include <stdio.h>

int persegi(int s);
int Persegi_Panjang(int p, int l);
float segitiga(int a, int t);
float lingkaran(int r);

int main(){
    int a, s, hasil, l;
    float hasil_koma;
    printf("Pilih bangun datar:\n");
    printf("1. Persegi\n");
    printf("2. Persegi Panjang\n");
    printf("3. Segitiga\n");
    printf("4. Lingkaran\n");
    printf("Pilih rumus: ");
    scanf("%d", &a);
    switch (a){
        case 1: 
            printf("Masukkan Panjang Sisinya ");
            scanf("%d", &s);
            persegi(s);
            hasil = persegi(s);
            printf("%d\n", hasil);
            break;
        case 2: 
            printf("Masukkan Panjangnya ");
            scanf("%d", &s);
            printf("Masukkan Lebarnya ");
            scanf("%d", &l);
            Persegi_Panjang(s, l);
            hasil = Persegi_Panjang(s, l);
            printf("%d\n", hasil);
            break;
        case 3: 
            printf("Masukkan Panjang Alasnya ");
            scanf("%d", &s);
            printf("Masukkan Panjang Tingginya ");
            scanf("%d", &l);
            segitiga(s, l);
            hasil_koma = segitiga(s, l);
            printf("%.2f\n", hasil_koma);
            break;
        case 4: 
            printf("Masukkan Panjang Jari-jarinya ");
            scanf("%d", &s);
            lingkaran(s);
            hasil_koma = lingkaran(s);
            printf("%.2f\n", hasil_koma);
            break;
    }
        
}


int persegi(int s){
    return s * s;
}

int Persegi_Panjang(int p, int l){
    return p * l;
}

float segitiga(int a, int t){
    return (a * t)/ 2.0;
}

float lingkaran(int r){
    return (22.0*r*r)/7;
}
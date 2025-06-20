#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    // Complete the code.
    int bilBulat;
    long bilBulatPanjang;
    char karakter;
    float bilDesimal;
    double bilDesimalPanjang;
    scanf("%d %ld %c %f %lf", &bilBulat, &bilBulatPanjang, &karakter, &bilDesimal, &bilDesimalPanjang);
    printf("%d\n", bilBulat);
    printf("%ld\n", bilBulatPanjang);
    printf("%c\n", karakter);
    printf("%.3f\n", bilDesimal);
    printf("%.9lf\n", bilDesimalPanjang);
    return 0;
}

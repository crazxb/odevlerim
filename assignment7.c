#include <stdio.h>
#include <stdlib.h>
//12 kişilik bir sınıftaki öğrencilerin toplam sınıf ortalamasını yazdıran program. Ortalama için ayrı bir fonksiyon kullandım.
int ders_notu[11];
float ortalama(int ders_notu[11]);
float toplam=0.0;
float sinif_ortalamasi;

int main(){
    do{
        printf("Programdan cikmak icin ders notunu 111 giriniz.");
        printf("\nDers notunu giriniz:\t",ders_notu[11]);
        scanf("%d",&ders_notu[11]);
        if(ders_notu<0){
            printf("\nGecersiz sinav notu");
            break;
        }
    }
    while(ders_notu[11]!=111);
        sinif_ortalamasi=ortalama(ders_notu[11]);
        printf("\nSinif ortalamasi:\t%.2f",sinif_ortalamasi);
        system("pause");
        return 0;
}
    float ortalama(int ders_notu[11]){
     int a=1;
     for (int i = 0; i < 12; ++i,++a) {
     toplam += ders_notu[i]/a;
     }
     return toplam;
    }
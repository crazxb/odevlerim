//Girdiğimiz sayıların ortalamasını alan program. Dizi ve hesaplamalarımı yaptığım ayrı bir fonksiyon bulunduruyor.
#include <stdio.h>
#include <stdlib.h>
int sayi;
float aritmetik_ortalama(int toplam);
int degerler[5];
int toplam=0;
float sonuc=0;
float ortalama;
int a=0;
int i;
int main(){
    printf("Kac sayi gireceksiniz?:\n");
    scanf("%d",&a);
    for(i=0;i<a;++i){
        printf("Sayi giriniz:\n");
        scanf("%d",&degerler[i]);
        toplam += degerler[i];
    }
        sonuc = aritmetik_ortalama(toplam); 
        printf("Aritmetik ortalama:%f\n",sonuc);
    system("pause");
    return 0;
}    

float aritmetik_ortalama(int toplam){
    ortalama=toplam/a;
    return ortalama; 
}

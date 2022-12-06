#include <stdio.h>
#include <stdlib.h>
int Sayac(int dizi[8]);

//Dizinin ortalama değerinden daha büyük olan değerlerin sayısını döndüren program.
int main(){
    int dizi[8]; 
    for(int i=0; i<8; ++i){
        printf("Sayi giriniz:\t");
        scanf("%d",&dizi[i]); //Kullanıcı sayıları girdi.
    }
    int ortalamadan_buyukler=Sayac(dizi); //Fonksiyondan dönen sayac değerini ortalamadan_buyukler değişkenine eşitledim. 
    printf("\nOrtalama degerden dahha buyuk olan degerlerin sayisi: %d\n",ortalamadan_buyukler); //Dizi içindeki sayıların ortalama değerinden daha büyük olan değerlerin sayısı yazıldı.
    system("pause");
    return 0;
}
int Sayac(int dizi[8]){
    int sayac=0; //Dizideki sayıların ortalama değerinden daha büyük olan değerlerin sayısını tutan sayac değişkeni tanımlandı.
    int toplam=0; 
    for(int i=0; i<8; ++i){ 
        toplam+=dizi[i]; //Dizideki sayıların toplamı bulundu.
        float ortalama=toplam/8; //Ortalama bulundu.
        if(ortalama<dizi[i]){ //Eğer dizinin ortalama değeri şimdi girilen sayıdan küçükse sayacı bir artır.
            ++sayac;
        }  
    }
    return sayac; //Fonksiyon sonu sayac değerini döndür.
}
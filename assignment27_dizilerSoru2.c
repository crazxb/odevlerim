#include <stdio.h>
#include <stdlib.h>
int EnBuyukEleman(int dizi[8]);
//Dizinin en büyük elemanını döndüren program.
int main(){
    int dizi[8]; 
    for(int i=0; i<8; ++i){
        printf("Sayi giriniz:\t");
        scanf("%d",&dizi[i]); //Kullanıcı sayıları girdi.
    }
    int enbuyuk_deger=EnBuyukEleman(dizi); //Fonksiyondan dönen dizi değerini enbuyuk_deger değişkenine eşitledim. 
    printf("\nEn buyuk deger: %d\n",enbuyuk_deger); //Dizi içindeki en büyük değer yazıldı.
    system("pause");
    return 0;
}
int EnBuyukEleman(int dizi[8]){
    for(int i=0; i<8; ++i){ //İlk girilen sayı sonraki girilen sayılarla karşılaştırılıyor. Böylece en büyük değer fonksiyon sonunda geri döndürülmüş oluyor.
        if(dizi[0]<dizi[i]){
            dizi[0]=dizi[i];
        }  
    }
    return dizi[0];
}
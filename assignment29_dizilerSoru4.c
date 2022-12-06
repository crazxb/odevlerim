#include <stdio.h>
#include <stdlib.h>
int EnBuyukİkinciEleman(int dizi[8]);
int max1; 
int max2;
//Dizinin ikinci en büyük elemanını döndüren program.
int main(){
    int dizi[8]; 
    for(int i=0; i<8; ++i){
        printf("Sayi giriniz:\t");
        scanf("%d",&dizi[i]); //Kullanıcı sayıları girdi.
    }
    int enbuyuk_deger=EnBuyukİkinciEleman(dizi); //Fonksiyondan dönen dizi değerini enbuyuk_deger değişkenine eşitledim. 
    printf("\nIkinci en buyuk deger: %d\n",enbuyuk_deger); //Dizi içindeki ikinci en büyük değer yazıldı.
    system("pause");
    return 0;
}
int EnBuyukİkinciEleman(int dizi[8]){
    for(int i=0; i<8; i++) {
        if(dizi[i]>max1){ //Eğer şimdi girilen sayı daha önceki birinci en büyük sayıdan daha büyükse şimdiki birinci en büyüğü ikinci en büyük sayı yap.  
            max2 = max1;
            max1 = dizi[i];
        }
        else if(dizi[i] > max2 && dizi[i] < max1){//Eğer şimdi girilen sayı ikinci en büyük sayıdan daha büyük ve birinci en büyük sayıdan küçükse şimdiki girilen sayıyı ikinci en büyük sayı yap.
            max2 = dizi[i];
        }
    }
    return max2;//İkinci en büyük sayıyı fonksiyon sonunda geri döndür.
}
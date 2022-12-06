#include <stdio.h>
#include <stdlib.h>
int EnKucukEleman(int dizi[8]);
//Dizinin en küçük elemanını döndüren program.
int main(){
    int dizi[8]; 
    for(int i=0; i<8; ++i){
        printf("Sayi giriniz:\t");
        scanf("%d",&dizi[i]); //Kullanıcı sayıları girdi.
    }
    int enkucuk_deger=EnKucukEleman(dizi); //Fonksiyondan dönen dizi değerini enkucuk_deger değişkenine eşitledim. 
    printf("\nEn kucuk deger: %d\n",enkucuk_deger); //Dizi içindeki en küçük değer yazıldı.
    system("pause");
    return 0;
}
int EnKucukEleman(int dizi[8]){
    for(int i=0; i<8; ++i){ //İlk girilen sayı sonraki girilen sayılarla karşılaştırılıyor.
        if(dizi[0]>dizi[i]){//Eğer ilk girilen değer şimdi girilen değerden büyükse şimdi girdiğimiz değeri ilk girilen değere (yani en büyük değere) eşitle.
            dizi[0]=dizi[i];
        }  
    }
    return dizi[0]; //En büyük sayıyı fonksiyon sonunda geri döndür.
}
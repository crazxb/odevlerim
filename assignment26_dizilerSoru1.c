#include <stdio.h>
#include <stdlib.h>
int KacKezGectigi(int dizi[8], int aranan);

//Kullanicinin parametre olarak girdiği bir değerin dizi içinde kaç kez geçtiğini döndüren program.
int main(){
    int dizi[8]; int aranan; 
    for(int i=0; i<8; ++i){
        printf("Sayi giriniz:\t");
        scanf("%d",&dizi[i]); //Kullanıcı sayıları girdi.
    }
    printf("\nAranan degeri giriniz:\t"); 
    scanf("%d",&aranan); //Kullanıcı aranan değeri girdi.
    int aranan_deger=KacKezGectigi(dizi,aranan); //Fonksiyondan dönen sayaç değerini aranan_deger değişkenine eşitledim. 
    printf("\nAranan deger %d kez gecti\n",aranan_deger); //Aranan değerin dizi içinde kaç kez geçtiği yazıldı.
    system("pause");
    return 0;
}

int KacKezGectigi(int dizi[8], int aranan){
    int sayac=0; //Aranan sayının kaç kez geçtiğini tutan bir sayaç tanımlandı.
    for(int i=0; i<8; ++i){
        if(dizi[i]==aranan){
            ++sayac;
        }  
    }
    return sayac;
}
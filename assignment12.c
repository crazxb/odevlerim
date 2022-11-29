#include <stdio.h>
#include <stdlib.h>
//Bir ürüne yapılacak zam veya indirimden sonra ürünün fiyatını hesaplayan program. Zam ve indirim oranını ayrı bir fonksiyonda hesapladım.
float urun_fiyati;
float yeni_fiyat=0;
float yf;
int zi;
int yuzde;
float degisim(float urun_fiyati,int yuzde);

int main(){
    printf("Urun fiyati girin:\t");
    scanf("%f",&urun_fiyati);
    printf("\n(1) Zam (2) Indirim\n Zam mi, indirim mi?:\t");
    scanf("%d",&zi);
    printf("\nYuzde kac zam/indirim?:\t");
    scanf("%d",&yuzde);
    if(urun_fiyati<=0){
        printf("\nYanlis urun fiyati girdiniz.\n");
    }
    else if(zi<1 || zi>2){
        printf("\nYanlis parametre tipi girdiniz.\n");
    }
    else if(zi==1){
        yeni_fiyat = degisim(urun_fiyati,yuzde);
        printf("\nUrunun eski fiyati:\t%f\nUrunun yeni fiyati:\t%f\n",urun_fiyati,yeni_fiyat);
    }
    else if(zi==2){
        yeni_fiyat = degisim(urun_fiyati,yuzde);
        printf("\nUrunun eski fiyati:\t%f\nUrunun yeni fiyati:\t%f\n",urun_fiyati,yeni_fiyat);
    }
    system("pause");
    return 0;
}

float degisim(float urun_fiyati,int yuzde){
    if(zi==1){
        yf=urun_fiyati+(urun_fiyati*yuzde)/100;
        return yf;
    }
    else if(zi==2){
        yf=urun_fiyati-(urun_fiyati*yuzde)/100;
        return yf;
    }

}
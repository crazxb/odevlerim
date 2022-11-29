#include <stdio.h>
#include <stdlib.h>
//Seçilen bölgede alınacak istenilen boyutlardaki bir arsanın tutarını yazan program. Arsa hesabı için ayrı bir fonksiyon kullandım.
int bolge; 
int donum; 
int arsa_fiyati;
int arsa_hesabi(int bolge,int donum);
int son_fiyat;

int main(){
    printf("Kac donum arsa alacaksiniz?:\n");
    scanf("%d",&donum);
    printf("(1)Yenimahalle (2)Sincan (3)Kahramankazan\nArsa alacaginiz bolgeyi secin:\n");
    scanf("%d",&bolge);
    switch(bolge){
        case 1:son_fiyat=arsa_hesabi(bolge,donum);printf("Ucret:%d TL\n",son_fiyat);break;
        case 2:son_fiyat=arsa_hesabi(bolge,donum);printf("Ucret:%d TL\n",son_fiyat);break;
        case 3:son_fiyat=arsa_hesabi(bolge,donum);printf("Ucret:%d TL\n",son_fiyat);break;
    }
    system("pause");
    return 0;
}

int arsa_hesabi(int bolge,int donum){
    if(bolge==1){
        arsa_fiyati=donum*100000;
        return arsa_fiyati;
    }
    else if(bolge==2){
        arsa_fiyati=donum*80000;
        return arsa_fiyati;
    }
    else if(bolge==3){
        arsa_fiyati=donum*60000;
        return arsa_fiyati;
    }
}
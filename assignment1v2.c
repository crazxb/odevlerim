#include <stdio.h>
#include <stdlib.h>
// Girilen YDS, ALES ve MO puanları üzerinden kişinin sınava girip giremeyeceğini kontrol eden program. toplam ortalama hesabı için ayrı bir fonksiyon kullandım.
    int YDS;
    int ALES;
    int MO;//MO(Mezuniyet Ortalaması)
    float TO; //TO(Toplam Ortalama)
    float NOT;
    float toplam_ortalama(int ALES, int YDS, int MO);
int main(){
    printf("YDS Notunuzu Giriniz:");
    scanf("%d", &YDS);
    if( YDS > 70 ){
        printf("\nAles Notunuzu Giriniz:");
        scanf("%d", &ALES);
        printf("\nMezuniyet Ortalamanizi Giriniz:");
        scanf("%d", &MO);
        NOT = toplam_ortalama(ALES,YDS,MO);
            if(NOT > 60){
                printf("\nSinava basvuru yapabilirsiniz. Toplam Ortalama Notunuz: %.2f\n", NOT);
            }
            else{
                printf("\nToplam ortalama degeriniz 60 ustu olmalidir.Sinava basvuramazsiniz.");    
            }
    }
    else{ 
        printf("\nYDS notunuz 70'den buyuk olmali. Sinava basvuramazsiniz.");
    }
   system("pause");
   return 0;
}
float toplam_ortalama(int ALES, int YDS, int MO){
TO = ALES*0.50 + YDS*0.25 + MO*0.25;
return TO;
}
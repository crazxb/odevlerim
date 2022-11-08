#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int YDS;
    int ALES;
    int MO;//MO(Mezuniyet Ortalaması)
    float TO; //TO(Toplam Ortalama)

    printf("YDS Notunuzu Giriniz:");
    scanf("%d", &YDS);
    if( YDS > 70 ){
        printf("\nAles Notunuzu Giriniz:");
        scanf("%d", &ALES);
        printf("\nMezuniyet Ortalamanizi Giriniz:");
        scanf("%d", &MO);
        TO = ALES*0.50 + YDS*0.25 + MO*0.25;
        
            if(TO > 60){
                printf("\nSinava basvuru yapabilirsiniz.");
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

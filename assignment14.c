#include <stdio.h>
#include <stdlib.h>
//Girilen yılı takvimler arasında dönüştüren program. Dönüşümler için ayrı bir fonksiyon kullandım.
float girilen_tarih;
int birinci_takvim;
int ikinci_takvim;
float donusturulen_takvim; float sonuc=0;
float donusum(float girilen_tarih);

int main(){
    printf("(1)Hicri (2)Miladi\nIlk takvim turunu giriniz:\t");
    scanf("%d",&birinci_takvim);
    printf("\nYil giriniz:\t");
    scanf("%f",&girilen_tarih);
    printf("\n(1)Hicri (2)Miladi\nDonusum yapmak istediginiz takvimin turunu giriniz:\n");
    scanf("%d",&ikinci_takvim);
        if(birinci_takvim==1 && ikinci_takvim==1){
        printf("Lutfen birinci ve ikinci takvim turunu farkli secin.\n");
        }
        else if(birinci_takvim==1 && ikinci_takvim==2){
        sonuc = donusum(girilen_tarih);
        printf("%f Hicri ----> %f Miladi\n",girilen_tarih,sonuc);
        }
        else if(birinci_takvim==2 && ikinci_takvim==1){
        sonuc = donusum(girilen_tarih);
        printf("%f Miladi ----> %f Hicri\n",girilen_tarih,sonuc);
        }
        else if(birinci_takvim==2 && ikinci_takvim==2){
        printf("Lutfen birinci ve ikinci takvim turunu farkli secin.\n");
        }
        system("pause");
        return 0;
}

float donusum(float girilen_tarih){
    if(birinci_takvim==1 && ikinci_takvim==2){
        donusturulen_takvim = (girilen_tarih-(girilen_tarih*0.03))+621;
        return donusturulen_takvim;
    }
    else if(birinci_takvim==2 && ikinci_takvim==1){
        donusturulen_takvim = ((girilen_tarih-621)/33)+(girilen_tarih-621);
        return donusturulen_takvim;
    }

}
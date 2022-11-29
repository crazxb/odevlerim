#include <stdio.h>
#include <stdlib.h>
//Girilen uzunluğu istenilen birimler arasında dönüştüren program. Dönüşümler için ayrı bir fonksiyon kullandım.
float girilen_olcu;
int birinci_birim;
int ikinci_birim;
float donusturulen_olcu; float sonuc=0;
float donusum(float girilen_olcu);

int main(){
    printf("(1)Santimetre (2)Metre (3)Kilometre\nIlk uzunluk birimini giriniz:\t");
    scanf("%d",&birinci_birim);
    printf("\nUzunluk giriniz:\t");
    scanf("%f",&girilen_olcu);
    printf("\n(1)Santimetre (2)Metre (3)Kilometre\nDonusum yapmak istediginiz uzunlugun birimini giriniz:\n");
    scanf("%d",&ikinci_birim);
        if(birinci_birim==1 && ikinci_birim==1){
        printf("Lutfen birinci ve ikinci uzunluk birimini farkli secin.\n");
        }
        else if(birinci_birim==1 && ikinci_birim==2){
        sonuc = donusum(girilen_olcu);
        printf("%f Santimetre ----> %f Metre\n",girilen_olcu,sonuc);
        }
        else if(birinci_birim==1 && ikinci_birim==3){
        sonuc = donusum(girilen_olcu);
        printf("%f Santimetre ----> %f Kilometre\n",girilen_olcu,sonuc);
        }
        else if(birinci_birim==2 && ikinci_birim==1){
        sonuc = donusum(girilen_olcu);
        printf("%f Metre ----> %f Santimetre\n",girilen_olcu,sonuc);
        }
        else if(birinci_birim==2 && ikinci_birim==2){
        printf("Lutfen birinci ve ikinci uzunluk birimini farkli secin.\n");
        }
        else if(birinci_birim==2 && ikinci_birim==3){
        sonuc = donusum(girilen_olcu);
        printf("%f Metre ----> %f Kilometre\n",girilen_olcu,sonuc);
        }
        else if(birinci_birim==3 && ikinci_birim==1){
        sonuc = donusum(girilen_olcu);
        printf("%f Kilometre ----> %f Santimetre\n",girilen_olcu,sonuc);      
        }
        else if(birinci_birim==3 && ikinci_birim==2){
        sonuc = donusum(girilen_olcu);
        printf("%f Kilometre ----> %f Metre\n",girilen_olcu,sonuc);      
        }
        else if(birinci_birim==3 && ikinci_birim==3){
        printf("Lutfen birinci ve ikinci uzunluk birimini farkli secin.\n");
        }
        system("pause");
        return 0;
}

float donusum(float girilen_olcu){
    if(birinci_birim==1 && ikinci_birim==2){
        donusturulen_olcu = (girilen_olcu/100);
        return donusturulen_olcu;
    }
    else if(birinci_birim==1 && ikinci_birim==3){
        donusturulen_olcu = (girilen_olcu/10000);
        return donusturulen_olcu;
    }
    else if(birinci_birim==2 && ikinci_birim==1){
        donusturulen_olcu = (girilen_olcu*100);
        return donusturulen_olcu;
    }
    else if(birinci_birim==2 && ikinci_birim==3){
        donusturulen_olcu = (girilen_olcu/1000);
        return donusturulen_olcu;    
    }
    else if(birinci_birim==3 && ikinci_birim==1){
        donusturulen_olcu = (girilen_olcu*10000);
        return donusturulen_olcu;
    }
    else if(birinci_birim==3 && ikinci_birim==2){
        donusturulen_olcu = (girilen_olcu*1000);
        return donusturulen_olcu;
    }    

}
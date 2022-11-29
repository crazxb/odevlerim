#include <stdio.h>
#include <stdlib.h>
/// Girilen sıcaklığı istenilen başka bir sıcaklık birimine dönüştüren program. Dönüşümler için ayrı bir fonksiyon kullandım.
int birinci_birim; int ikinci_birim;
float girilen_sicaklik; float donusturulen_sicaklik; float sonuc=0;
float donusum(float girilen_sicaklik);

int main(){
    printf("(1)Celcius (2)Kelvin (3)Fahrenheit\nIlk sicaklik birimini giriniz:\n");
    scanf("%d",&birinci_birim);
    printf("Sicakligi giriniz:\n");
    scanf("%f",&girilen_sicaklik);
    printf("(1)Celcius (2)Kelvin (3)Fahrenheit\nDonusum yapmak istediginiz sicaklik birimini giriniz:\n");
    scanf("%d",&ikinci_birim);

    if(birinci_birim==1 && ikinci_birim==1){
        printf("Lutfen birinci ve ikinci sicaklik birimini farkli secin.\n");
    }
    else if(birinci_birim==1 && ikinci_birim==2){
        sonuc = donusum(girilen_sicaklik);
        printf("%.2f Celcius ----> %.2f Kelvin\n",girilen_sicaklik,sonuc);
    }
    else if(birinci_birim==1 && ikinci_birim==3){
        sonuc = donusum(girilen_sicaklik);
        printf("%.2f Celcius ----> %.2f Fahrenheit\n",girilen_sicaklik,sonuc);
    }
    else if(birinci_birim==2 && ikinci_birim==1){
        sonuc = donusum(girilen_sicaklik);
        printf("%.2f Kelvin ----> %.2f Celcius\n",girilen_sicaklik,sonuc);
    }
    else if(birinci_birim==2 && ikinci_birim==2){
        printf("Lutfen birinci ve ikinci sicaklik birimini farkli secin.\n");
    }
    else if(birinci_birim==2 && ikinci_birim==3){
        sonuc = donusum(girilen_sicaklik);
        printf("%.2f Kelvin ----> %.2f Fahrenheit\n",girilen_sicaklik,sonuc);        
    }
    else if(birinci_birim==3 && ikinci_birim==1){
        sonuc = donusum(girilen_sicaklik);
        printf("%.2f Fahrenheit ----> %.2f Celcius\n",girilen_sicaklik,sonuc);        
    }
    else if(birinci_birim==3 && ikinci_birim==2){
        sonuc = donusum(girilen_sicaklik);
        printf("%2.f Fahrenheit ----> %.2f Kelvin\n",girilen_sicaklik,sonuc);        
    }
    else if(birinci_birim==3 && ikinci_birim==3){
        printf("Lutfen birinci ve ikinci sicaklik birimini farkli secin.\n");
    }
    system("pause");
    return 0;
}

float donusum(float girilen_sicaklik){
    if(birinci_birim==1 && ikinci_birim==2){
        donusturulen_sicaklik = (girilen_sicaklik+273.15);
        return donusturulen_sicaklik;
    }
    else if(birinci_birim==1 && ikinci_birim==3){
        donusturulen_sicaklik = (girilen_sicaklik*1.8)+32;
        return donusturulen_sicaklik;
    }
    else if(birinci_birim==2 && ikinci_birim==1){
        donusturulen_sicaklik = (girilen_sicaklik-273.15);
        return donusturulen_sicaklik;
    }
    else if(birinci_birim==2 && ikinci_birim==3){
        donusturulen_sicaklik = (girilen_sicaklik-457.87);
        return donusturulen_sicaklik;    
    }
    else if(birinci_birim==3 && ikinci_birim==1){
        donusturulen_sicaklik = (girilen_sicaklik-32)*(9/5);
        return donusturulen_sicaklik;
    }
    else if(birinci_birim==3 && ikinci_birim==2){
        donusturulen_sicaklik = (girilen_sicaklik+457.87);
        return donusturulen_sicaklik;
    }    

}
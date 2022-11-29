#include <stdio.h>
#include <stdlib.h>
//Kullanıcıdan girilen verilere göre vücut kitle indeksi hesaplayan program. VKİ hesabı için ayrı bir fonksiyon kullandım.    
float boy;
float kilo;
float vki; //vki(Vücut kitle endeksi)
float vki_hesaplama(float kilo, float boy);

int main() {
    
    printf("Boyunuzu giriniz (X.XX m):");
    scanf("%f", &boy);
    printf("\nKilonuzu giriniz (XX.XX kg):");
    scanf("%f", &kilo);
    vki=vki_hesaplama(kilo,boy);
    if(vki < 18.5) {
        printf("\nVucut kitle endeksiniz %f. Zayifsiniz.\n", vki);
    }      
    if(vki >= 18.5 && vki < 25){
        printf("\nVucut kitle endeksiniz %f. Normalsiniz.\n", vki);  
    }          
    if(vki >= 25 && vki < 30){
        printf("\nVucut kitle endeksiniz %f. Kilolusunuz.\n", vki);   
    }
    if(vki >=30 && vki < 35){
        printf("\nVucut kitle endeksiniz %f. Obezsiniz.\n", vki); 
    }      
    if(vki >= 35){
        printf("\nVucut kitle endeksiniz %f. Asiri Obezsiniz.\n", vki);
    }   
    system("pause");
    return 0;
    }

    float vki_hesaplama(float kilo, float boy){
        float vki_hesabi = kilo / (boy*boy);
        return vki_hesabi;
    }
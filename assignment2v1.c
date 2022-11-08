#include <stdio.h>
#include <stdlib.h>
int main() {
    float boy;
    float kilo;
    float vki; //vki(Vücut kitle endeksi)

    printf("Boyunuzu giriniz (X.XX m):");
    scanf("%f", &boy);
    printf("\nKilonuzu giriniz (XX.XX kg):");
    scanf("%f", &kilo);
    vki = kilo / (boy*boy);
    if(vki < 18.5) {
        printf("\nVucut kitle endeksiniz %f. Zayifsiniz.", vki);
    }      
    if(vki >= 18.5 && vki < 25){
        printf("\nVucut kitle endeksiniz %f. Normalsiniz.", vki);  
    }          
    if(vki >= 25 && vki < 30){
        printf("\nVucut kitle endeksiniz %f. Kilolusunuz.", vki);   
    }
    if(vki >=30 && vki < 35){
        printf("\nVucut kitle endeksiniz %f. Obezsiniz.", vki); 
    }      
    if(vki >= 35){
        printf("\nVucut kitle endeksiniz %f. Asiri Obezsiniz.", vki);
    }   
    system("pause");
    return 0;
    }

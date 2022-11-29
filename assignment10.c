#include <stdio.h>
#include <stdlib.h>
//Girilen kenar uzunluklarından arsanın alanını hesaplayan program. Alan hesabı için ayrı bir fonksiyon kullandım.
int alan_hesabi(int birinci, int ikinci);
int alan;
int sonuc;
int birinci;
int ikinci;

int main(){
    printf("1. kenar uzunlugunu giriniz(m):");
    scanf("%d",&birinci);
    printf("\n2. kenar uzunlugunu giriniz(m):");
    scanf("%d",&ikinci);
    sonuc=alan_hesabi(birinci,ikinci);
    printf("\nArsanizin alani(m^2):%d \n",sonuc);
    system("pause");
    return 0;
}

    int alan_hesabi(int birinci, int ikinci){
        alan=birinci*ikinci;
        return alan;
    }
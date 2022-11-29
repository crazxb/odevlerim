#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
//Ortalama yerçekimi ivmesini basit sarkaç düzeneği üzerinden hesaplayan program.
float L;
float T;
float g_ort_hesabi(float L, float T);
float g_ort;
float sonuc;
int main(){
    printf("Ipin uzunlugunun ortalamasi(cm):\t");
    scanf("%f",&L);
    printf("\n1 salinim icin gecen ortalama sure/Periyot(s):\t");
    scanf("%f",&T);
    sonuc=g_ort_hesabi(L,T);
    printf("\nOrtalama yercekimi ivmesi(m/s^2):%f\n",sonuc);
    system("pause");
    return 0;

}

float g_ort_hesabi(float L, float T){
    g_ort=(4*PI*PI)*(L/(T*T));
    return g_ort;


}
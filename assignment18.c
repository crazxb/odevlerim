#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
//Ortalama yerçekimi ivmesini bulurken yaptığımız hatayı basit sarkaç düzeneği üzerinden hesaplayan program.
float L;
float T;
float L_sapma;
float T_sapma;
float g_ort_hesabi(float L, float T);
float g_ort;
float sonuc;
float g_ort_sapmasi(float L, float T, float L_sapma, float T_sapma);
float g_ort_sapma;
float sonuc_sapma;
int main(){
    printf("Ipin uzunlugunun ortalamasi(cm):\t");
    scanf("%f",&L);
    printf("\n1 salinim icin gecen ortalama sure/Periyot(s):\t");
    scanf("%f",&T);
    printf("\n1 salinim icin gecen ortalama suredeki sapma/Periyottaki sapma(s):\t");
    scanf("%f",&T_sapma);
    printf("Ipin uzunlugunun ortalama sapmasi(cm):\t");
    scanf("%f",&L_sapma);
    sonuc=g_ort_hesabi(L,T);
    printf("\nOrtalama yercekimi ivmesi(m/s^2):%f\n",sonuc);
    sonuc_sapma=g_ort_sapmasi(L,T,L_sapma,T_sapma);
    printf("\nOrtalama yercekimi ivmesindeki sapma(m/s^2):+-%f\n",sonuc_sapma);
    printf("%f+-%f",sonuc,sonuc_sapma);
    system("pause");
    return 0;
}

float g_ort_hesabi(float L, float T){
    g_ort=(4*PI*PI)*(L/(T*T));
    return g_ort;
}
float g_ort_sapmasi(float L, float T, float L_sapma, float T_sapma){
    g_ort_sapma=g_ort*((2*(T_sapma/T)))-(L_sapma/L);
    return g_ort_sapma;
}
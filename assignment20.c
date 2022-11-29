#include <stdio.h>
#include <stdlib.h>
#define g 9.8
//Cismin mekanik enerjisini hesaplayan program.
float m;
float V;
float h;
float U;
float K;
float konum_hesabi(float t, float a);
float konum;
float potansiyel_enerji(float h, float m);
float potansiyel;
float kinetik_enerji(float V, float m);
float kinetik;
float mekanik;

int main(){
    printf("Cisim y düzleminde ne kadar hareket etti?:\t");
    scanf("%f",&h);
    printf("\nCismin kutlesi neydi?:\t");
    scanf("%f",&m);
    potansiyel=potansiyel_enerji(h,m);
    printf("\nCismin potansiyel enerjisi:\t%f",potansiyel);
    kinetik=kinetik_enerji(V,m);
    printf("\nCismin kinetik enerjisi:\t%f\n",kinetik);
    mekanik=kinetik+potansiyel;
    printf("\nCismin mekanik enerjisi:\t%f\n",mekanik);
    system("pause");
    return 0;
}

float potansiyel_enerji(float h, float m){
    U=m*g*h;
    return U;
}
float kinetik_enerji(float V, float m){
    K=0.5*m*V*V;
    return K;
}

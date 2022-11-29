//Girilen yarıçap değerine göre kürenin hacmini hesaplayan program. hacim hesabının yapıldığı ayrı bir fonksiyon kullandım.
#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
int r;
float hacimhesabi(int r);
float hacim;
float sonuc;

int main(){
printf("Kurenin yaricapini giriniz:\n");
scanf("%d",&r);
sonuc = hacimhesabi(r);
printf("Kurenin hacmi: %.2f\n", sonuc);
system("pause");
return 0;
}

float hacimhesabi(int r){
    hacim = ((4*PI)/3)*r*r*r;
    return hacim;
}
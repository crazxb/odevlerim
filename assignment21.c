#include <stdio.h>
#include <stdlib.h>
//Sabit ivmeli dairesel harekette cismin açısal hızını hesaplayan program.
float t;
float a;
float w_ilk;
float w_son;
float x;
float w_son_hesabi(float t, float a,float w_ilk);
int main(){
    printf("Cisim ne kadar saniye hareket etti?:\t");
    scanf("%f",&t);
    printf("\nCismin ivmesi neydi?:\t");
    scanf("%f",&a);
    w_son=w_son_hesabi(t,a,w_ilk);
    printf("\nCismin son acisal hizi:\t%f\n",w_son);
    system("pause");
    return 0;
}

float w_son_hesabi(float t, float a,float w_ilk){
    x=w_ilk+a*t;
    return x;
}

#include <stdio.h>
#include <stdlib.h>
//Sabit ivmeli dairesel harekette cismin açısal ivmesini hesaplayan program.
float acisal_ivme;
float egim;
float x;
float acisal_ivme_hesabi(float egim);
int main(){
    printf("Cisim ne kadar egimli bir ortamdahareket etti?:\t");
    scanf("%f",&egim);
    acisal_ivme=acisal_ivme_hesabi(egim);
    printf("\nCismin son acisal hizi:\t%f\n",acisal_ivme);
    system("pause");
    return 0;
}

float acisal_ivme_hesabi(float egim){
    x=2*egim;
    return x;
}

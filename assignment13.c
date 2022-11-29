#include <stdio.h>
#include <stdlib.h>
//Molar derişim hesabı yapan program. Molar derişimi bulmak için ayrı bir fonksiyon kullandım.
float mol;
float hacim;
float M;
float Molar_Derisim;
float molar_derisim(float mol, float hacim);

int main(){
    printf("Cozeltide kac mol madde bulundugunu girin(6,02x10^2):\t");
    scanf("%f",&mol);
    printf("\nCozeltinin hacmini girin(L):\t");
    scanf("%f",&hacim);
    Molar_Derisim=molar_derisim(mol,hacim);
    printf("\nMolar derisim(M):\t%f\n",Molar_Derisim);
    system("pause");
    return 0;
}

float molar_derisim(float mol, float hacim){
    M=mol/hacim;
    return M;
}
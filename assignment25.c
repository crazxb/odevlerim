#include <stdio.h>
#include <stdlib.h>
#define g 9.8
//Serbest düşme hareketi yapan bir cismin kat ettiği yolu hesaplayan program.
float h;
float h_ilk;
float t;
float yol;
float h_son;
float yol_hesabi(float t);
int main(){
    printf("Cismin ilk yuksekligi neydi?:\t");
    scanf("%f",&h_ilk);
    printf("\nCisim ne kadar sure hareket etti?:\t");
    scanf("%f",&t);
    yol=yol_hesabi(t);
    printf("\nCismin kat ettigi yol:\t%f\n",yol);
    if(h_ilk<yol){
        printf("\nCisim yerdedir.");
    }
    else{
    h_son=h_ilk-yol;
    printf("\nCismin son yuksekligi:\t%f\n",h_son);
    }
    system("pause");
    return 0;
}

float yol_hesabi(float t){
    h=0.5*g*t;
    return h;
}
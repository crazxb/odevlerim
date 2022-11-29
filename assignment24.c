#include <stdio.h>
#include <stdlib.h>
#define g 9.8
//Serbest düşme hareketi yapan bir cismin kat ettiği yolu hesaplayan program.
float h;
float t;
float yol;
float yol_hesabi(float t);
int main(){
    printf("\nCisim ne kadar sure hareket etti?:\t");
    scanf("%f",&t);
    yol=yol_hesabi(t);
    printf("\nCismin kat ettigi yol:\t%f\n",yol);
    system("pause");
    return 0;
}

float yol_hesabi(float t){
    h=0.5*g*t;
    return h;
}
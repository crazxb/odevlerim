#include <stdio.h>
#include <stdlib.h>
//Sabit ivmeli harekette konumu hesaplayan program.
float t;
float a;
float x;
float konum_hesabi(float t, float a);
float konum;
int main(){
    printf("Cisim ne kadar saniye hareket etti?:\t");
    scanf("%f",&t);
    printf("\nCismin ivmesi neydi?:\t");
    scanf("%f",&a);
    konum=konum_hesabi(t,a);
    printf("\nCismin konumu(m):\t%f\n",konum);
    system("pause");
    return 0;
}

float konum_hesabi(float t, float a){
    x=0.5*a*t*t;
    return x;
}

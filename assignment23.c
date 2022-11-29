#include <stdio.h>
#include <stdlib.h>
//Gücü hesaplayan program.
float guc;
float is;
float t;
float W;
float guc_hesabi(float is, float t);
int main(){
    printf("Cisim ne kadar is yapti?:\t");
    scanf("%f",&is);
    printf("\nCisim ne kadar sure is yapti?:\t");
    scanf("%f",&t);
    guc=guc_hesabi(is,t);
    printf("\nCismin gucu:\t%f\n",guc);
    system("pause");
    return 0;
}

float guc_hesabi(float is, float t){
    W=is/t;
    return W;
}

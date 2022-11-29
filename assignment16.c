#include <stdio.h>
#include <stdlib.h>
//Girdiğimiz verilerle denklemin sonucunu veren program.
int veri1;
int veri2;
float denklem_sonucu;
float sonuc;
float denklem(int veri1, int veri2);

int main(){
    printf("Veri1'i giriniz:\t");
    scanf("%d",&veri1);
    printf("Veri2'yi giriniz:\t");
    scanf("%d",&veri2);
    sonuc=denklem(veri1,veri2);
    printf("\nDenklem sonucu:\t%f\n",sonuc);
    system("pause");
    return 0;
}

float denklem(int veri1, int veri2){
    denklem_sonucu=((veri1*veri2)+(veri1/veri2)-(veri2%veri1))/100;
    return denklem_sonucu;

}
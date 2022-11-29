#include <stdio.h>
#include <stdlib.h>
//Emeklilik tazminatı hesaplayan program.
int yil;
int tazminat_miktari;
int tazminat;
int tazminat_hesabi(int yil);

int main(){
    printf("Kac yil calistiniz?:\t");
    scanf("%d",&yil);
    tazminat=tazminat_hesabi(yil);
    printf("\nEmeklilik tazminatiniz:\t%dTL\n",tazminat);
    system("pause");
    return 0;
}

int tazminat_hesabi(int yil){
    tazminat_miktari=yil*1500;
    return tazminat_miktari;

}



#include <stdio.h>

int main(){
   
   int carpan1; int carpan2; int sonuc;

    for(carpan1=1;carpan1<11;carpan1++){
        for(carpan2=1;carpan2<11;carpan2++){
            sonuc=carpan1*carpan2;
            printf("%d x %d = %d\n",carpan1,carpan2,sonuc);
        }
        printf("--------------\n");
    }

}

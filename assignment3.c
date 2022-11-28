#include <stdio.h>
#include <stdlib.h>
int main(){
    
    int satir;
    int i;
    int j; 

    printf("Satir sayisi giriniz:");
    scanf("%d", &satir);
    for(i=1;i<=satir;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("#");
        }
        printf("\n");
    }
    system("pause");
    return 0;
}

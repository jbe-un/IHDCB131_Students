#include <stdlib.h>
#include <stdio.h>

int main(void){
    int nb;
    scanf("%i",&nb);
    int compte = 0;
    while(nb>=0){
        compte++;
        scanf("%i",&nb);
    }
    printf("%d\n",compte);
    return 0;
}
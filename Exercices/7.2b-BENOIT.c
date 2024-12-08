#include <stdio.h>
#include <stdbool.h>

int main(){
    int tab[20] = {0};
    int nb;
    do {
        printf("Entre un nombre entre 0 (inclus) et  20 (exclus)");
        scanf("%d)",&nb);
        tab[nb]=nb;
    } while (nb < 20);
    int maximum = 0;
    int plat = 0;
    for (int i = 0 ; i < 20 ; i++) {
        if (i>tab[nb]){
            tab[nb] = i;
            plat = i;
        }
    }
    printf("Le plat le plus consommé aujourd'hui est le numéro %d",plat);
    return 0;
}
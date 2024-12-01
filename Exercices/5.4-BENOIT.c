#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int nombreChiffresDiv(int nb, int div) {
    int nombre = 0;
    while(nb > 0) {
        if((nb % 10) % div == 0) {
            nombre++;
        }
        nb = nb / 10;
    }
    return nombre;
}

bool estPremier(int nb) {
    if (nb <= 1) return false;
    for (int i = 2; i * i <= nb; i++) {
        if (nb % i == 0) return false;
    }
    return true;
}

int main(void) {
    int inf, sup;
    int max = 0;
    int nb_max = 1;
    
    scanf("%d %d", &inf, &sup);
    
    for (int nombre = inf; nombre <= sup; nombre++) {
        if (estPremier(nombre)) {
            int nb_div = nombreChiffresDiv(nombre, 3);
            if (nb_div >= max) {
                max = nb_div;
                nb_max = nombre;
            }
        }
    }
    
    printf("%d\n", nb_max);
    return 0;
}
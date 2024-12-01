#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool estPremier(int nb){     
    int i=2;   
    while(nb>1 && nb%i!=0){     
        i++;   
    }   
    return nb==i;   
}

int sommeChiffres(int nb){     
    int somme = 0;     
    while(nb>0){         
        somme+=nb%10;         
        nb=nb/10;     
    }     
    return somme; 
}

int main() {
    int inf, sup;
    printf("Entrez la borne inférieure : ");
    scanf("%d", &inf);
    printf("Entrez la borne supérieure : ");
    scanf("%d", &sup);
    
    int somme = 0;
    
    while (inf <= sup) {
        int sommeCh = sommeChiffres(inf);
        if (estPremier(sommeCh)) {
            printf("%d ", inf);
            somme += inf;
        }
        inf++;
    }
    
    printf("\nSomme : %d\n", somme);
    
    return 0;
}
#include <stdio.h>

int main(void) {
    float compte = 0;
    float somme = 0;
    int nb = 0;
        while (nb >= 0) {
            //printf ("Pour sortir du programme écrivez un nombre entier négatif.\n");
            //printf ("Donnez un nombre entier positif.\n");
            scanf("%d", &nb);
            if (nb>=0){
                somme = somme + nb;
                compte++;
            }
        }
    printf("La somme des nombres est : %.2f \n",somme);
    float moyenne = somme/compte;
    printf("La moyenne des nombres est  %.2f\n",moyenne);
    return 0;
}

#include <stdio.h>
int main (void) {
int nombre_entier ;
int compteur_boucle = 1;
    printf ("Entrez une valeur entière.\n");
    scanf ("%d",&nombre_entier);
    while (compteur_boucle <= nombre_entier){
        if (nombre_entier%compteur_boucle == 0 ){
            printf ("%d ",compteur_boucle);
            compteur_boucle ++;
        }
        else {
            compteur_boucle ++;
        }
    }
return 0;
}

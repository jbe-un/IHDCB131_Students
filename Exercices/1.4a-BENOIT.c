#include <stdio.h>
//intégration de la librairie
int dividende;
int diviseur;
int resultat;
int modulo;
//déclaration des variables (remplacement de D1 et D2) et ajout de résultat et modulo

int main(void) {
    scanf ("%d",&dividende);
    scanf ("%d",&diviseur);
    resultat = dividende / diviseur;
    modulo = dividende % diviseur;
    printf ("Résultat de la division entière:%d Reste :%i\n",resultat,modulo);
    return 0;
}
#include <stdio.h>
#define PI 3.14159265359

double calcul_surface_noire(double taille_cote) {
    double surface_carre, rayon_cercle, surface_cercle, aire_surface_noire;

    // Préconditions: taille_cote doit être un réel positif
    // TODO: calculer l'aire de la surface noire
    surface_carre = (taille_cote*taille_cote);
    rayon_cercle = (taille_cote/2); 
    surface_cercle = (PI*(rayon_cercle*rayon_cercle));
    aire_surface_noire = (surface_carre-surface_cercle);
            
    // Postconditions: la variable aire_surface_noire contient l'aire des parties noires du carré
    return aire_surface_noire;
}

// Ne pas modifier la ligne suivante
#ifndef TEST_IHDCB131

int main(void) {
    double taille_cote, aire_surface_noire;
    printf("Entrez la taille du côté du carré: ");
    // TODO: récupérer la taille du côté
    scanf ("%lf",&taille_cote);

    // ----------------------------------
    // NE PAS MODIFIER LE CODE CI-DESSOUS
    // ----------------------------------

    // Appel de la fonction calcul_surface_noire définie ci-dessus qui calcule l'aire des parties noires d'un carré
    aire_surface_noire = calcul_surface_noire(taille_cote);
    printf("La surface noire équivaut à %.2lf\n", aire_surface_noire);

    return 0;
}

// Ne pas modifier la ligne suivante
#endif
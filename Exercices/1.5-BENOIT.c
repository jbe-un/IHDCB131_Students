#include <stdio.h>

double calcul_cout_total(double longueur_peinture, double largeur_peinture, double cout_bois_cm, double cout_toile_m2) {
    double cout_total;
    // Préconditions: longueur_peinture, largeur_peinture, cout_bois_cm et cout_toile_m2 doivent être des réels positifs

    // TODO: calculer le cout total
    double quantite_bois = (longueur_peinture+largeur_peinture)*2;
    double longueur_toile = longueur_peinture+6;
    double largeur_toile = largeur_peinture+6;
    double calcul_toile = (longueur_toile+largeur_peinture)/10000;
    double cout_bois = quantite_bois*cout_bois_cm;
    double cout_toile = calcul_toile*cout_toile_m2;
    cout_total = (quantite_bois*cout_bois_cm)+(calcul_toile*cout_toile_m2);

    // Postconditions: la variable cout_total contient la valeur du cout total des matériaux
    return cout_total;
}

// Ne pas modifier la ligne suivante
#ifndef TEST_IHDCB131

int main(void) {
    double longueur_peinture, largeur_peinture, cout_bois_cm, cout_toile_m2, cout_total;

    // Récupération des données entrées par l'utilisateur
    printf("Donnez la longueur et la largeur de la peinture: ");
    // TODO: récupérer la longueur et la largeur
    scanf("%lf %lf",&longueur_peinture,&largeur_peinture);
    printf("Donnez le cout par centimètre du bois pour le châssis: ");
    // TODO: récupérer le cout par cm du bois
    scanf("%lf",&cout_bois_cm);
    printf("Donnez le cout par mètre carré de la toile: ");
    // TODO: récupérer le cout par mètre carré de la toile
    scanf("%lf",&cout_toile_m2);
    // TODO: non marqué dans l'éxercice mais dans la consigne !
    

    // ----------------------------------
    // NE PAS MODIFIER LE CODE CI-DESSOUS
    // ----------------------------------

    // Appel de la fonction "calcul_cout_total" définie ci-dessus qui calcule le cout total des matériaux et le stocke dans la variable "cout_total"
    cout_total = calcul_cout_total(longueur_peinture, largeur_peinture, cout_bois_cm, cout_toile_m2, quantite_bois);
    printf("Pour une peinture de %.1lf cm de longueur et %.1lf cm de largeur, vous devriez acheter %.2lf cm de bois.\n", longueur_peinture, largeur_peinture, quantite_bois);
    printf("La toile devra avoir une longueur de %.1lf cm et une largeur de %.1lf cm.\n", longueur_toile, largeur_toile);
    printf("Étant donné que le prix du bois est %.2lf euro par cm courant et que la toile coute %.2lf euro par mètre carré:\n", cout_bois_cm, cout_toile_m2);
    printf("Le bois coûtera %.2lf euro.\n", cout_bois);
    printf("La toile coûtera %.2lf euro.\n", cout_toile);
    printf("Le prix total des matériaux sera %.2lf euro.\n", cout_total);
    printf("Le prix total des matériaux sera %.2lf euro.", cout_total);
    return 0;
}

// Ne pas modifier la ligne suivante
#endif
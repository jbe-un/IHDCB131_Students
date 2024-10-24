#include <stdio.h>

int main(void) {
    int nombreSemaines, hommes, femmes;
    double pourcentageHommes, pourcentageFemmes;

    // TODO: récupérer le nombre de semaines
    hommes = 0;
    femmes = 0;
    printf ("Nombre de semaines: ");
    scanf("%d",&nombreSemaines);

    for (int semaine = 0; semaine < nombreSemaines; semaine++) {
        // TODO : récupérer le genre de chaque semaine (attention au mauvais format de remplissage du genre!)
        char genre = ' ';
        printf ("Semaine %i: ",semaine+1);
        scanf(" %c",&genre);
        if (genre == 'f'){
            femmes++;
        }
        else if (genre == 'm'){
            hommes++;
        }
        else {
            printf ("%c n'est pas valide !\n",genre);
            semaine--;
        }
    }

    // TODO: calculer le pourcentage de présence pour chaque genre
    pourcentageFemmes = (((float)femmes/(float)nombreSemaines)*100);
    pourcentageHommes = (((float)hommes/(float)nombreSemaines)*100);

    printf("Tu as hébergé %.2lf%% d'hommes et %.2lf%% de filles sur les %d dernières semaines.\n",
           pourcentageHommes, pourcentageFemmes, nombreSemaines);

    return 0;
}
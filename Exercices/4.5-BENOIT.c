#include <stdio.h>

int main(void) {
    int number_notes, max_length, number_of_change;
    double max_note;

    // TODO: récupérer le nombre de notes que l'utilisateur va encoder
    printf("Entrez le nombre de notes qui va être encodée");
    scanf("%d",&number_notes);
    int length[number_notes];
    double notes[number_notes];
    printf("Entrez successivement la fréquence et la durée de chaque note :\n");

    // Récupération de chaque note et sa durée correspondante et stockage des valeurs dans les tableaux notes et length
    for (int i = 0; i < number_notes; i++) {
        scanf("%lf %d", &notes[i], &length[i]);
    }


    // PRE: number_notes est un entier stockant le nombre de notes,
    //      notes est un tableau de valeurs réelles stockant les notes jouées et
    //      length est un tableau d'entiers stockant la durée des notes jouées

    // TODO: Initialisation - initialiser les variables
    max_note = notes[0];
    max_length = 0;
    number_of_change = 0;

    // INV: TODO

    // TODO: Boucle - trouver la note jouée la plus longtemps ainsi que sa durée puis
    //                stocker ces valeurs dans max_note et max_length et
    //                calculer le nombre de changements de sens du mouvement mélodique
    for (int i = 0; i < number_notes; i++){
        if (max_length < length[i]){
            max_length = length[i];
            max_note = notes[i];
        }
    }
    for (int i = 1; i < number_notes; i++){
        if (notes[i] > notes[i - 1]){
            if(i > 1){         // 
                if(notes[i] <= notes[i-2]){
                    if( i > 2){
                        if (notes[i] >= notes[i-3]){
                            number_of_change += 1;
                        }
                    }

                }
            }
        }
        else if (notes[i] < notes[i - 1]){
            if( i > 1){
                if (notes[i] >= notes[i-2]){
                    if( i > 2){
                        if (notes[i] >= notes[i-3]){
                            number_of_change += 1;
                        }
                    }
                }
            }
        }
    }
    // Je n'y arrive pas à trouver le changement de sens... Désolé, je passe l'exercice.
    // TODO: Clôture - à compléter si nécessaire
    // POST: la variable max_length contient la durée de la note qui a été jouée le plus longtemps,
    //       la variable max_note contient la note jouée le plus longtemps et
    //       la variable number_of_change contient le nombre de changements de sens du mouvement mélodique


    printf("Changements de sens: %d\n", number_of_change);
    printf("La note la plus longue est %.2f et a été jouée pendant %d ms.\n", max_note, max_length);

    return 0;
}
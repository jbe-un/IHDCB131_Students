#include <stdio.h>
/*
Auteur: Cédric Libert
Description: Les autorités du Pakistan ont besoin de nous pour informatiser le traitement des mariages et vérifier si les mariages demandés sont autorisés.
en effet, un mariage n'est autorisé que si le garçon a plus de 18 ans, et la fille plus de 16 ans.
Les conjoints devront indiquer leur âge au programme.
Celui-ci leur indique soit que la demande est acceptée et en règle, soit que c'est accepté mais que la fille est trop jeune
(pratique illégale mais néanmoins pratiquée), soit qu'ils sont tous les deux trop jeunes, soit que le garçon est trop jeune.
*/

int main(void){
    printf("Age du garçon: ");
    int garçon;
    scanf("%i",&garçon);
    printf("Age de la fille: ");
    int fille;
    scanf("%i",&fille);

    if(garçon<=0 || fille<=0){
        printf("Un age est un entier positif.\n");
    }
    else if(garçon<=17){
        printf("Mariage refusé, le jeune doit avoir plus de 18ans.\n");
        }
    else if(fille<=15){
        printf("Mariage accepté...bien que la fille soit un peu trop jeune.\n");
    }
    else if (garçon>=18 || fille>=16){
        printf("Mariage accepté.  Tout est en ordre.\n");
    }
    else{
        printf("Mariage refusé.\n");
    }
return 0;
}
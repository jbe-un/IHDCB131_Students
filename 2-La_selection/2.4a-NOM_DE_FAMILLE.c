/*

Auteur: Cédric Libert
Description: Les autorités du Pakistan ont besoin de nous pour informatiser le traitement des mariages et vérifier si les mariages demandés sont autorisés.  En effet, un mariage n'est autorisé que si le garçon a plus de 18 ans, et la fille plus de 16 ans.  Les conjoints devront indiquer leur âge au programme.  Celui-ci leur indique soit que la demande est acceptée et en règle, soit que c'est accepté mais que la fille est trop jeune (pratique illégale mais néanmoins pratiquée), soit qu'ils sont tous les deux trop jeunes, soit que le garçon est trop jeune.

*/

int main(void){
    printf("Age du garçon: ");
    float garçon;
    scanf("%i",garçon);
    printf("Age de la fille: ");
    float fille;
    scanf("%i",fille)


    if(garcon>18 || fille>16){
        printf("Mariage accepté.  Tout est en ordre.\n")
    }
    if(fille<16){
        printf("Mariage accepté...bien que la fille soit un peu trop jeune.\n");
    }
    else{
        printf("Mariage refusé.\n");
    }
}
return 0;
}
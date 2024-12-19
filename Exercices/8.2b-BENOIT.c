#include <stdio.h>
#include <stdbool.h>

// PRE La fonction reçoit une chaine de caractère
// POST Renvoit le nombre de caractère dans la chaine, exemple si "Coucou" doit renvoyer le chiffre 6
int taille (char* chaine_caractere){
    int taille = 0;
    for (int i = 0 ; chaine_caractere[i] != '\0'; i++){
        taille ++;
    }
    return taille;
}

int main(){
    char* chaine = NULL;
    printf("Entrez une chaine de caractère : \n");
    scanf(" %ms", &chaine);
    printf("Le chaîne de caratère fait : %d", taille(chaine));
    return 0;
}
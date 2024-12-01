#include <stdio.h>
#include <stdlib.h>
#define INFINITY 100

// PRE Infini est défini à 100
// POST Estimation de la valeur de e: Somme_{n=0}^INFINI 1/n!
int somme_infini(){
    double e = 0;
    int n = 0;
    while(n<INFINITY){
        double fact_n = 1;
        int i;
        for(i=1;i<=n;i++){
            fact_n *= i;
        }
        e+= 1/fact_n;
        n++;
    }
    printf("La valeur de e est %lf\n\n----------------\n\n",e);
}
// PRE 
// POST Nombre de podiums de 3 athlètes possibles parmi n: n!/(n-3)!
int athletes(){
    int athletes = 0;
    printf("Combien y a-t-il d'athlètes en compétition ?\n");
    scanf("%d",&athletes);
    int fact_athletes = 1;
    int fact_athletes_moins = 1;
    if(athletes>=3){
        int i;
        for(i=1;i<=athletes;i++){
            fact_athletes *= i;
        }
        for(i=1;i<=athletes-3;i++){
            fact_athletes_moins *= i;
        }
        printf("Nombre de podiums possibles:%d\n",fact_athletes/fact_athletes_moins);
    }
    else{
        printf("Pas assez d'athlètes pour remplir le podium !\n");
    }
    return EXIT_SUCCESS;
}

int main(void){
    somme_infini();
    athletes();     
}

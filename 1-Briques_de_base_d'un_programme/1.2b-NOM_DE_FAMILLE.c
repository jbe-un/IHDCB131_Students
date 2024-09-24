#include <stdio.h>

#define PI 3.14159265359

int main() {
    printf("Quelle est la taille du rayon du cercle dont vous voulez connaitre la circonférence ? ");
    float rayon;
    scanf("%f",&rayon);
    printf("La circonférence du cercle vaut: %f", 2*rayon*PI);
    return 0;
}
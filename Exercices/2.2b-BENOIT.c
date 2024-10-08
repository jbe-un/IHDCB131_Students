#include <stdio.h>

int main(void) {
    int a, b, c, maximum;

    printf("Veuillez entrer trois nombres: ");
    // TODO: récupérer les valeurs de a, b et c
    scanf("%i",&a);
    scanf("%i",&b);
    scanf("%i",&c);
    // TODO: calculer le maximum entre les trois nombres a, b et c

    //déterminer si A est plus grand que B et C, implanter la valeur la plus grande dans la variable maximum
    maximum = a;
    if (b> maximum)
    {
        maximum = b;
    }
    if (c> maximum)
        maximum = c;

    printf("Le maximum entre les nombres %d, %d et %d est %d", a, b, c, maximum);

    return 0;
}
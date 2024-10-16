#include <stdio.h>
#include <stdbool.h>

int main() {
    int nombre, a = 0, b = 0;
    bool solution_trouvee = false;

    // Afficher une phrase permettant d'encoder le nombre et récupérer sa valeur
    printf("Entrez un nombre: ");
    scanf("%d", &nombre);

    // Chercher et trouver si nombre peut être décomposé en la somme de deux cubes de deux nombres positifs
    for (int x = 1; (x * x * x) <= nombre; x++) {
        for (int y = 1; (y * y * y) <= nombre; y++) {
            if ((x * x * x) + (y * y * y) == nombre) {
                a = x; // Assigner la valeur de x à a
                b = y; // Assigner la valeur de y à b
                solution_trouvee = true;
                break; // Sortie de la boucle intérieure
            }
        }
        if (solution_trouvee) {
            break; // Sortie de la boucle extérieure
        }
    }

    if (solution_trouvee) {
        printf("%d est la somme du cube de %d et de %d.\n", nombre, a, b);
    } else {
        printf("Aucune paire de nombres positifs n'a été trouvée.\n");
    }

    return 0;
}

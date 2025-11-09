// KLADNÉ / ZÁPORNÉ ČÍSLO
#include <stdio.h>

int main() {
    int zadaneCislo; // proměnná pro uložení čísla, které zadá uživatel

    // výzva k zadání čísla
    printf("Zadejte číslo: ");
    scanf("%d", &zadaneCislo); // načtení celého čísla z klávesnice

    // pomocí podmínek zjistíme, zda je číslo kladné, záporné nebo nula
    if (zadaneCislo > 0) {
        printf("Zadané číslo je kladné.\n");
    } else if (zadaneCislo < 0) {
        printf("Zadané číslo je záporné.\n");
    } else {
        printf("Zadané číslo je nula.\n");
    }

    return 0; // konec programu
}

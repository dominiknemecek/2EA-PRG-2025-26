#include <stdio.h>

// Tento program vypíše jméno uživatele do konzole.

int main() {
    // Deklarace proměnné pro uložení jména (řetězce znaků).
    char jmeno[50];

    // Výzva pro uživatele, aby zadal své jméno.
    printf("Zadej sve jmeno: ");

    // Načtení textu od uživatele ze vstupu (konzole).
    scanf("%49s", jmeno);

    // Výpis zadaného jména.
    printf("Ahoj, %s!\\n", jmeno);

    // Ukončení programu.
    return 0;
}

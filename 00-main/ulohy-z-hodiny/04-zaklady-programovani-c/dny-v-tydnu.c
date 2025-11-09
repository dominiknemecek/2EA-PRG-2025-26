// DNY V TÝDNU
#include <stdio.h>

int main() {
    int den; // proměnná pro uložení čísla dne

    // uživatel zadá číslo dne od 1 do 7
    printf("Zadejte číslo dne v týdnu (1-7): ");
    scanf("%d", &den); // načtení hodnoty od uživatele

    // pomocí podmínek určíme, jaký den odpovídá zadanému číslu
    if (den == 1) {
        printf("Pondělí\n");
    } else if (den == 2) {
        printf("Úterý\n");
    } else if (den == 3) {
        printf("Středa\n");
    } else if (den == 4) {
        printf("Čtvrtek\n");
    } else if (den == 5) {
        printf("Pátek\n");
    } else if (den == 6) {
        printf("Sobota\n");
    } else if (den == 7) {
        printf("Neděle\n");
    } else {
        // pokud číslo není mezi 1 a 7, vypíše se tato zpráva
        printf("Neplatný den v týdnu.\n");
    }

    return 0; // konec programu
}

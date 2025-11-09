// HODINY
#include <stdio.h>

int main() {
    int cisloHodiny; // proměnná pro uložení čísla hodiny (0–24)

    // výzva k zadání hodiny
    printf("Zadejte číslo hodiny (0–24): ");
    scanf("%d", &cisloHodiny); // načtení hodnoty z klávesnice

    // podmínky podle zadané hodiny určují, jaký pozdrav se vypíše
    if (cisloHodiny >= 0 && cisloHodiny <= 9) {
        // od půlnoci do 9 hodin → ráno
        printf("Dobré ráno!\n");
    } else if (cisloHodiny > 9 && cisloHodiny <= 12) {
        // dopoledne
        printf("Hezké dopoledne!\n");
    } else if (cisloHodiny > 12 && cisloHodiny <= 18) {
        // odpoledne
        printf("Dobré odpoledne!\n");
    } else if (cisloHodiny > 18 && cisloHodiny <= 24) {
        // večer až půlnoc
        printf("Dobrý večer!\n");
    } else {
        // mimo rozsah 0–24
        printf("Neplatná hodina.\n");
    }

    return 0; // konec programu
}

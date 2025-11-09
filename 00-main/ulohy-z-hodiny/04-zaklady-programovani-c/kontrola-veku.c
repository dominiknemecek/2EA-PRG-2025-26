// KONTROLA VĚKU
#include <stdio.h>

int main() {
    int vekUzivatele; // proměnná pro uložení věku, který zadá uživatel

    // výzva k zadání věku
    printf("Kolik je vám let? ");
    scanf("%d", &vekUzivatele); // načtení celého čísla z klávesnice

    // kontrola zadané hodnoty a vyhodnocení věkové kategorie
    if (vekUzivatele < 0) {
        // uživatel zadal záporné číslo, což nedává smysl
        printf("Neplatný věk - záporné číslo.\n");
    } else if (vekUzivatele < 18) {
        // menší než 18 → nezletilý
        printf("Jste nezletilý.\n");
    } else if (vekUzivatele < 65) {
        // od 18 do 64 → dospělý
        printf("Jste dospělý.\n");
    } else {
        // 65 a více → senior
        printf("Jste senior.\n");
    }

    return 0; // konec programu
}

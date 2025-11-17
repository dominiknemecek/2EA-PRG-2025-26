/*---- | 06 CYKLY A VĚTVENÍ V PROGRAMU | ----
==============================================
Zdrojový kód: 01_Cykly_Prezentace
*/

#include <stdio.h> // Tento řádek zahrnuje knihovnu stdio.h, která umožňuje používat funkce pro vstup a výstup (např. printf).

int main() // Hlavní funkce programu, kde se provádí kód.
{
    // BEZ POUŽITÍ FOR CYKLU
    printf("Hello!\n"); // Tento řádek vytiskne "Hello!" a skočí na nový řádek.
    printf("Hello!\n"); // Tento řádek to zopakuje.
    printf("Hello!\n"); // A znovu...
    printf("Hello!\n"); // A znovu...
    printf("Hello!\n"); // A naposledy. Každé volání printf vytiskne jednu větu.

    // S POUŽITÍM FOR CYKLU
    for (int i = 0; i < 5; i++) // Cyklus 'for' se skládá ze tří částí:
    {
        // 1. 'int i = 0;' - Inicializace proměnné i na 0, to bude počítadlo, které sleduje počet opakování.
        // 2. 'i < 5;' - Podmínka. Cyklus se bude opakovat, dokud je i menší než 5.
        // 3. 'i++' - Po každém průchodu cyklem se hodnota i zvýší o 1 (i++ znamená "přičti 1 k i").
        printf("Hello!\n"); // Tento řádek se vytiskne 5krát, díky cyklu for.
    }

    return 0; // Funkce main vrací hodnotu 0, což znamená, že program úspěšně skončil.
}

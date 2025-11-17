/*---- | 06 CYKLY A VĚTVENÍ V PROGRAMU | ----
==============================================
Zdrojový kód: 06_Cykly_Prezentace
*/

#include <stdio.h> // Tento řádek zahrnuje knihovnu stdio.h, která umožňuje používat funkce pro vstup a výstup (např. printf).

int main() // Hlavní funkce programu, kde se provádí kód.
{
    for (int i = 1; i <= 5; i++) // První cyklus ovládá řádky, začínáme s i = 1 a pokračujeme do i = 5 (celkem 5 řádků).
    {
        for (int j = 1; j <= 5; j++) // Druhý cyklus ovládá sloupce, začínáme s j = 1 a pokračujeme do j = 5 (celkem 5 znaků v řádku).
        {
            // Podmínka kontroluje, zda součet i a j je sudý nebo lichý. Pokud je sudý, vytiskne se "X", jinak se vytiskne "O".
            if ((i + j) % 2 == 0)
                printf("X"); // Pokud je součet i a j sudý, vytiskne se "X".
            else
                printf("O"); // Pokud je součet i a j lichý, vytiskne se "O".
        }
        // Na konci každého řádku přidáme nový řádek pomocí printf("\n"), aby se vytvořila nová řada X a O.
        printf("\n");
    }
    return 0; // Funkce main vrací hodnotu 0, což znamená, že program úspěšně skončil.
}

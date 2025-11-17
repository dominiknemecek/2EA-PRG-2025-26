/*---- | 06 CYKLY A VĚTVENÍ V PROGRAMU | ----
==============================================
Zdrojový kód: 07_Cykly_Prezentace
*/

#include <stdio.h> // Tento řádek zahrnuje knihovnu stdio.h, která umožňuje používat funkce pro vstup a výstup (např. printf).

int main() // Hlavní funkce programu, kde se provádí kód.
{
    for (int i = 1; i <= 5; i++) // Vnější cyklus řídí řádky, celkem od 1 do 5 (celkem 5 řádků).
    {
        for (int j = 1; j <= 5; j++) // Vnitřní cyklus řídí sloupce, od 1 do 5 (celkem 5 znaků v řádku).
        {
            // Podmínka kontroluje, jestli jsme na kraji "rámečku" (první nebo poslední řádek/sloupec).
            if (i == 1 || j == 1 || i == 5 || j == 5)
                printf("X"); // Pokud jsme na okraji (první nebo poslední řádek/sloupec), vytiskne se "X".
            else
                printf(" "); // Pokud nejsme na okraji, vytiskne se prázdné místo (" ").
        }
        printf("\n"); // Po každém řádku vytiskneme nový řádek.
    }
    return 0; // Funkce main vrací hodnotu 0, což znamená, že program úspěšně skončil.
}

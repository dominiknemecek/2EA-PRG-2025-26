/*---- | 06 CYKLY A VĚTVENÍ V PROGRAMU | ----
==============================================
Zdrojový kód: 04_Cykly_Prezentace
*/

#include <stdio.h> // Tento řádek zahrnuje knihovnu stdio.h, která umožňuje používat funkce pro vstup a výstup (např. printf).

int main() // Hlavní funkce programu, kde se provádí kód.
{
    for (int i = 1; i <= 10; i++) // První cyklus 'for' ovládá řádky tabulky (od 1 do 10).
    {
        for (int j = 1; j <= 10; j++) // Druhý cyklus 'for' ovládá sloupce tabulky (od 1 do 10).
        {
            // Vypočítáme součin hodnot 'i' a 'j' a vytiskneme jej. %4d znamená, že výstup bude zarovnán na 4 znaky.
            printf("%4d ", i * j); // Tímto příkazem tiskneme součin čísel 'i' a 'j'. Např. když i = 2 a j = 3, vytiskne se 6.
        }
        // Tento příkaz přidá nový řádek po každém dokončení vnitřního cyklu (po vytištění jedné řady součinů).
        printf("\n");
    }
    return 0; // Funkce main vrací hodnotu 0, což znamená, že program úspěšně skončil.
}

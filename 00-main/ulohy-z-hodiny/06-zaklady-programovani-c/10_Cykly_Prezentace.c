/*---- | 06 CYKLY A VĚTVENÍ V PROGRAMU | ----
==============================================
Zdrojový kód: 10_Cykly_Prezentace
*/

#include <stdio.h> // Tento řádek zahrnuje knihovnu stdio.h, která umožňuje používat funkce pro vstup a výstup (např. printf).

int main() // Hlavní funkce programu, kde se provádí kód.
{
    int pocet_sudych; // Proměnná, do které se uloží počet sudých čísel, která chce uživatel vypsat.
    int cislo = 2; // Proměnná, která reprezentuje první sudé číslo (začínáme s číslem 2).
    int vypsano_sudych = 0; // Počítadlo pro sudá čísla, které jsme již vypsali.
    
    printf("Zadejte počet sudých čísel: "); // Výzva pro uživatele, aby zadal, kolik sudých čísel chce vypsat.
    scanf("%d", &pocet_sudych); // Načtení čísla od uživatele a uložení do proměnné 'pocet_sudych'.
    
    // Smyčka 'while' běží, dokud nevypíšeme požadovaný počet sudých čísel.
    while (vypsano_sudych < pocet_sudych) 
    {
       printf("%d ", cislo); // Vypíšeme aktuální sudé číslo.
       cislo += 2; // Přičteme 2, abychom dostali další sudé číslo.
       vypsano_sudych++; // Zvýšíme počítadlo vypsaných sudých čísel o 1.
    }
    return 0; // Funkce main vrací hodnotu 0, což znamená, že program úspěšně skončil.
}

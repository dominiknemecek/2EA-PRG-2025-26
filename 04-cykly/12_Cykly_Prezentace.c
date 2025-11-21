/*---- | 06 CYKLY A VĚTVENÍ V PROGRAMU | ----
==============================================
Zdrojový kód: 12_Cykly_Prezentace
*/

#include <stdio.h> // Tento řádek zahrnuje knihovnu stdio.h, která umožňuje používat funkce pro vstup a výstup (např. printf).

int main() // Hlavní funkce programu, kde se provádí kód.
{
    int cislo; // Proměnná, do které se uloží číslo zadané uživatelem.
    
    do // Tato smyčka 'do-while' provede alespoň jednou to, co je mezi 'do' a 'while'.
    {
        // Výzva pro uživatele, aby zadal číslo větší než 10.
        printf("Zadejte číslo větší než 10: "); 
        scanf("%d", &cislo); // Načtení čísla od uživatele a uložení do proměnné 'cislo'.
    } 
    // Podmínka 'while' zajišťuje, že cyklus bude pokračovat, dokud uživatel nezadá číslo větší než 10.
    while (cislo <= 10); // Pokud je číslo menší nebo rovno 10, cyklus se opakuje.
    
    printf("Zadali jste správné číslo: %d\n", cislo); // Jakmile je číslo větší než 10, program vypíše tuto zprávu.
    
    return 0; // Funkce main vrací hodnotu 0, což znamená, že program úspěšně skončil.
}

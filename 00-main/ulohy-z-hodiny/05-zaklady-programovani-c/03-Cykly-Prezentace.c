/*---- | 06 CYKLY A VĚTVENÍ V PROGRAMU | ----
==============================================
Zdrojový kód: 03_Cykly_Prezentace
*/

#include <stdio.h> // Tento řádek zahrnuje knihovnu stdio.h, která umožňuje používat funkce pro vstup a výstup (např. printf).

int main() // Hlavní funkce programu, kde se provádí kód.
{
    int cislo; // Definujeme proměnnou 'cislo', do které uživatel zadá hodnotu.

    printf("Zadejte cislo pro vypocet: "); // Výzva pro uživatele, aby zadal číslo.
    scanf("%d", &cislo); // Funkce 'scanf' přečte celé číslo z uživatelského vstupu a uloží ho do proměnné 'cislo'.
    
    // Cyklus for, který provede 10 opakování:
    for (int i = 1; i <= 10; i++) // Cyklus začíná na i = 1 a pokračuje, dokud i není větší než 10.
    {
       int vysledek = cislo * i; // Vypočítáme násobek zadaného čísla a aktuální hodnoty 'i'.
       // Vytiskneme výsledek ve formátu "cislo x i = vysledek"
       printf("%d x %d = %d\n", cislo, i, vysledek); // Např. pokud cislo = 5, první výstup bude "5 x 1 = 5"
    }

    return 0; // Funkce main vrací hodnotu 0, což znamená, že program úspěšně skončil.
}

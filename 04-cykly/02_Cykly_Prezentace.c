/*---- | 06 CYKLY A VĚTVENÍ V PROGRAMU | ----
==============================================
Zdrojový kód: 02_Cykly_Prezentace
*/

#include <stdio.h> // Tento řádek zahrnuje knihovnu stdio.h, která umožňuje používat funkce pro vstup a výstup (např. printf).

int main() // Hlavní funkce programu, kde se provádí kód.
{
    // ČÍSELNÁ ŘADA 1-10
    for (int i = 0; i < 10; i++) // Cyklus 'for' začne s proměnnou i = 0 a bude se opakovat, dokud je i menší než 10. 
    {
        // V těle cyklu se vytiskne hodnota i + 1. Přičítáme 1, protože i začíná na 0, a my chceme začít tisknout od 1.
        printf("%d ", i + 1); // Tento řádek vytiskne čísla od 1 do 10 s mezerou mezi nimi.
    }
    printf("\n\n"); // Tento řádek odřádkuje jednotlivé řady tak, aby byly pod sebou.
    
    // ČÍSELNÁ ŘADA 10-1
    for (int i = 10; i > 0; i--) // Tento cyklus 'for' začne s i = 10 a bude se opakovat, dokud je i větší než 0.
    {
        // V každém průchodu cyklem se hodnota i vytiskne, a po každém kroku se i sníží o 1 (i--).
        printf("%d ", i); // Tento řádek vytiskne čísla od 10 dolů do 1, s mezerou mezi nimi.
    }


    return 0; // Funkce main vrací hodnotu 0, což znamená, že program úspěšně skončil.
}

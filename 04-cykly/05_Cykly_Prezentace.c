/*---- | 06 CYKLY A VĚTVENÍ V PROGRAMU | ----
==============================================
Zdrojový kód: 05_Cykly_Prezentace
*/

#include <stdio.h> // Tento řádek zahrnuje knihovnu stdio.h, která umožňuje používat funkce pro vstup a výstup (např. printf).

int main() // Hlavní funkce programu, kde se provádí kód.
{
    double zaklad, exponent, vysledek; // Definujeme tři proměnné typu 'double'. 'zaklad' je základ mocniny, 'exponent' je exponent a 'vysledek' uloží výsledek.
    
    printf("Zadejte zaklad mocniny: "); // Výzva pro uživatele, aby zadal základ mocniny.
    scanf("%lf", &zaklad); // Funkce 'scanf' načte desetinné číslo (double) a uloží ho do proměnné 'zaklad'.
    printf("Zadejte exponent mocniny: "); // Výzva pro uživatele, aby zadal exponent.
    scanf("%lf", &exponent); // Funkce 'scanf' načte desetinné číslo (double) a uloží ho do proměnné 'exponent'.
    
    vysledek = zaklad; // Inicializujeme proměnnou 'vysledek'. Nejprve ji nastavíme na hodnotu 'zaklad'.
    
    // Cyklus for, který opakuje násobení základu podle exponentu:
    for (int i = 1; i < exponent; i++) // Cyklus se spustí tolikrát, kolikrát je hodnota exponentu minus jedna.
    {
        vysledek *= zaklad; // Každým průchodem se 'vysledek' vynásobí hodnotou 'zaklad'.
    }
    printf("Vysledek je: %.2lf", vysledek); // Výstup výsledku s přesností na dvě desetinná místa pomocí %.2lf.

    return 0; // Funkce main vrací hodnotu 0, což znamená, že program úspěšně skončil.
}

/*---- | 06 CYKLY A VĚTVENÍ V PROGRAMU | ----
==============================================
Zdrojový kód: 09_Cykly_Prezentace
*/

#include <stdio.h> // Tento řádek zahrnuje knihovnu stdio.h, která umožňuje používat funkce pro vstup a výstup (např. printf).

int main() // Hlavní funkce programu, kde se provádí kód.
{
    int spravne_heslo = 1234; // Proměnná pro správné heslo, nastavena na hodnotu 1234.
    int zadane_heslo; // Proměnná, kam se uloží uživatelem zadané heslo.
    
    printf("Zadejte heslo: "); // Výzva pro uživatele, aby zadal heslo.
    scanf("%d", &zadane_heslo); // Načtení uživatelem zadaného hesla do proměnné 'zadane_heslo'.
    
    // Smyčka 'while' bude pokračovat, dokud uživatel nezadá správné heslo.
    while (zadane_heslo != spravne_heslo) // Pokud zadané heslo není správné, smyčka se bude opakovat.
    {
        printf("Nesprávné heslo! Zadejte heslo znovu: "); // Informujeme uživatele, že heslo je špatně, a vyzveme ho k zadání hesla znovu.
        scanf("%d", &zadane_heslo); // Načteme nové heslo od uživatele.
    }
    
    printf("Správné heslo! Vítejte v systému."); // Jakmile uživatel zadá správné heslo, program vypíše tuto zprávu.

    return 0; // Funkce main vrací hodnotu 0, což znamená, že program úspěšně skončil.
}

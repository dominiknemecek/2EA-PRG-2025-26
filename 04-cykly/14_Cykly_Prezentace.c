/*---- | 06 CYKLY A VĚTVENÍ V PROGRAMU | ----
==============================================
Zdrojový kód: 14_Cykly_Prezentace
*/

#include <stdio.h> // Tento řádek zahrnuje knihovnu stdio.h, která umožňuje používat funkce pro vstup a výstup (např. printf).

int main() // Hlavní funkce programu, kde se provádí kód.
{
    int vyska = 5; // Proměnná pro výšku trojúhelníků (v tomto případě je výška 5 řádků).
    printf("(a)      (b)\n\n"); // Výpis nadpisu pro dvě části výstupu.
    
    for (int i = 1; i <= vyska; i++) // Vnější smyčka řídí počet řádků (od 1 do 'vyska').
    {
        // Vykreslení prvního trojúhelníku (a) z pravé strany
        for (int j = vyska; j >= 1; j--) // Vnitřní smyčka se pohybuje od 'vyska' dolů.
        {
            if (j <= i) // Pokud je 'j' menší nebo rovno 'i', vypíšeme hvězdičku.
                printf("*");
            else // Jinak vypíšeme mezeru.
                printf(" ");
        }
        printf("     "); // Mezera mezi dvěma trojúhelníky.
        
        // Vykreslení druhého trojúhelníku (b) zleva
        for (int j = vyska; j >= 1; j--) // Opět vnitřní smyčka, která jde od 'vyska' dolů.
        {
            if (j >= i) // Pokud je 'j' větší nebo rovno 'i', vypíšeme hvězdičku.
                printf("*");
            else // Jinak vypíšeme mezeru.
                printf(" ");
        }
        printf("\n"); // Přechod na další řádek po vykreslení jednoho řádku obou trojúhelníků.
    }
    return 0; // Funkce main vrací hodnotu 0, což znamená, že program úspěšně skončil.
}

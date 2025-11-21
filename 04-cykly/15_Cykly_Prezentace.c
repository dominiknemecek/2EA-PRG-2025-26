/*---- | 06 CYKLY A VĚTVENÍ V PROGRAMU | ----
==============================================
Zdrojový kód: 15_Cykly_Prezentace
*/

#include <stdio.h> // Tento řádek zahrnuje knihovnu stdio.h, která umožňuje používat funkce pro vstup a výstup (např. printf).

int main() // Hlavní funkce programu, kde se provádí kód.
{
    int vyska = 5; // Výška trojúhelníků.
    
    for (int i = 1; i <= vyska; i++) // Smyčka pro každý řádek prvních dvou trojúhelníků.
    {
        // První trojúhelník (růst zprava doleva).
        for (int j = vyska; j >= 1; j--) // Smyčka pro každý sloupec v řádku (zprava doleva).
        {
            if (j <= i) // Pokud je pozice 'j' menší nebo rovna 'i', vykreslí se hvězdička.
                printf("*");
            else // Jinak se vykreslí mezera.
                printf(" ");
        }
        
        printf("   "); // Mezera mezi prvním a druhým trojúhelníkem.
        
        // Druhý trojúhelník (růst zleva doprava).
        for (int j = 1; j <= vyska; j++) // Smyčka pro sloupce (zleva doprava).
        {
            if (j <= i) // Pokud je pozice 'j' menší nebo rovna 'i', vykreslí se hvězdička.
                printf("*");
            else // Jinak se vykreslí mezera.
                printf(" ");
        }
        printf("\n"); // Přechod na nový řádek po vykreslení jednoho řádku obou trojúhelníků.
    }
    printf("\n"); // Odsazení mezi první a druhou částí.
    
    for (int i = 1; i <= vyska; i++) // Smyčka pro každý řádek druhých dvou trojúhelníků.
    {
        // Třetí trojúhelník (klesání zleva doprava).
        for (int j = 1; j <= vyska; j++) // Smyčka pro sloupce (zleva doprava).
        {
            if (j >= i) // Pokud je pozice 'j' větší nebo rovna 'i', vykreslí se hvězdička.
                printf("*");
            else // Jinak se vykreslí mezera.
                printf(" ");
        }
        printf("   "); // Mezera mezi třetím a čtvrtým trojúhelníkem.
        
        // Čtvrtý trojúhelník (klesání zprava doleva).
        for (int j = vyska; j >= 1; j--) // Smyčka pro sloupce (zprava doleva).
        {
            if (j >= i) // Pokud je pozice 'j' větší nebo rovna 'i', vykreslí se hvězdička.
                printf("*");
            else // Jinak se vykreslí mezera.
                printf(" ");
        }
        printf("\n"); // Přechod na nový řádek po vykreslení jednoho řádku obou trojúhelníků.
    }
    return 0; // Funkce main vrací hodnotu 0, což znamená, že program úspěšně skončil.
}

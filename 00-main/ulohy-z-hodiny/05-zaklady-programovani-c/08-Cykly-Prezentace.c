/*---- | 06 CYKLY A VĚTVENÍ V PROGRAMU | ----
==============================================
Zdrojový kód: 08_Cykly_Prezentace
*/

#include <stdio.h> // Tento řádek zahrnuje knihovnu stdio.h, která umožňuje používat funkce pro vstup a výstup (např. printf).

int main() // Hlavní funkce programu, kde se provádí kód.
{
    // Cyklus pro vykreslení tří různých obrazců vedle sebe, opakuje se 5krát pro 5 řádků
    for (int i = 1; i <= 5; i++) 
    {
        // 1. Šachovnice - střídání znaků "O" a "X" podle toho, jestli je součet i a j sudý nebo lichý
        for (int j = 1; j <= 5; j++) 
        {
            if ((i + j) % 2 == 0) // Pokud je součet i a j sudý, vytiskne "O"
                printf("O");
            else                  // Pokud je součet i a j lichý, vytiskne "X"
                printf("X");
        }
        printf("   "); // Přidáme tři mezery mezi jednotlivými obrazci
        
        // 2. Rámeček - tiskne se jen "X" na prvním nebo posledním řádku/sloupci, jinak mezera
        for (int j = 1; j <= 5; j++) 
        {
            if (i == 1 || j == 1 || i == 5 || j == 5) // Tiskne "X" na krajích (první/poslední řádek nebo sloupec)
                printf("X");
            else // Uvnitř rámečku se vytiskne mezera
                printf(" ");
        }
        printf("   "); // Opět tři mezery mezi obrazci
        
        // 3. Rámeček se šachovnicí uvnitř - podobné jako výše, ale uvnitř rámečku střídáme znaky "/" a "+"
        for (int j = 1; j <= 5; j++) 
        {
            if (i == 1 || j == 1 || i == 5 || j == 5) // Na krajích rámečku se vytiskne "X"
                printf("X");
            else 
            {
                if ((i + j) % 2 == 0) // Uvnitř rámečku střídáme "/" a "+"
                    printf("/");
                else
                    printf("+");
            }
        }
        printf("\n"); // Na konci každého řádku tiskneme nový řádek, abychom začali další řádku
    }
    return 0; // Funkce main vrací hodnotu 0, což znamená, že program úspěšně skončil.
}

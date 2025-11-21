/*---- | 06 CYKLY A VĚTVENÍ V PROGRAMU | ----
==============================================
Zdrojový kód: 11_Cykly_Prezentace
*/

#include <stdio.h> // Tento řádek zahrnuje knihovnu stdio.h, která umožňuje používat funkce pro vstup a výstup (např. printf).

int main() // Hlavní funkce programu, kde se provádí kód.
{
    double cislo1, cislo2; // Proměnné pro uložení dvou čísel, která uživatel zadá.
    int volba, pokracovat = 1; // 'volba' pro výběr operace, 'pokracovat' řídí, zda program pokračuje nebo skončí.

    // Smyčka 'while' běží, dokud je hodnota proměnné 'pokracovat' rovna 1 (tedy dokud uživatel chce pokračovat).
    while (pokracovat)
    {    
        // Výzva pro uživatele, aby zadal dvě čísla.
        printf("Zadejte prvni a druhe cislo: \n");
        scanf("%lf%lf", &cislo1, &cislo2); // Načtení dvou čísel do proměnných 'cislo1' a 'cislo2'.
        
        // Nabídka operací, které může uživatel zvolit.
        printf("Zvolte si operaci: \n");
        printf("1: +\n2: -\n3: *\n4: /\n"); // Nabídka čtyř základních aritmetických operací.
        scanf("%d", &volba); // Načtení volby operace.
    
        // Používáme 'switch', abychom provedli správnou operaci podle volby uživatele.
        switch (volba)
        {
            case 1: // Pokud uživatel zvolí 1, provede se sčítání.
                printf("Vysledek scitani je: %.2lf\n", cislo1 + cislo2); // Vypočítá a vypíše součet.
                break;
            case 2: // Pokud uživatel zvolí 2, provede se odčítání.
                printf("Vysledek odcitani je: %.2lf\n", cislo1 - cislo2); // Vypočítá a vypíše rozdíl.
                break;
            case 3: // Pokud uživatel zvolí 3, provede se násobení.
                printf("Vysledek nasobeni je: %.2lf\n", cislo1 * cislo2); // Vypočítá a vypíše výsledek násobení.
                break;
            case 4: // Pokud uživatel zvolí 4, provede se dělení.
                if (cislo2 != 0) // Kontrola, zda dělíme nenulovým číslem (dělení nulou není možné).
                    printf("Vysledek deleni je: %.2lf\n", cislo1 / cislo2); // Pokud není druhé číslo nula, vypočítá a vypíše výsledek dělení.
                else
                    printf("Nulou nelze delit!\n"); // Pokud je druhé číslo nula, vypíše se varování, že nulou nelze dělit.
                break;
            default: // Pokud uživatel zadá nesprávnou volbu (ne 1-4), vypíše se chybová zpráva.
                printf("Spatna volba!\n");
                break;
        }
        
        // Po provedení operace se program zeptá, zda chce uživatel pokračovat s dalším příkladem.
        printf("Prejete si zadat dalsi priklad? [1/0]\n");
        scanf("%d", &pokracovat); // Pokud uživatel zadá 1, cyklus se zopakuje. Pokud zadá 0, cyklus skončí.
    }

    return 0; // Funkce main vrací hodnotu 0, což znamená, že program úspěšně skončil.
}

// ŠATNÍK
#include <stdio.h>

int main() {
    float teplotaVenku; // proměnná pro uložení teploty, může mít i desetinnou hodnotu

    // výzva pro uživatele, aby zadal aktuální teplotu
    printf("Zadej teplotu venku a já ti vyberu vhodné oblečení:\n");
    scanf("%f", &teplotaVenku); // načtení hodnoty (např. 18.5)

    // podmínky podle teploty rozhodnou, co si má uživatel obléct
    if (teplotaVenku > 25)
    {
        printf("Venku je horko, vem si plavky a běž se koupat.\n");
    }
    else if (teplotaVenku <= 25 && teplotaVenku >= 20)
    {
        printf("Venku je teplo, vem si kraťasy a triko.\n");
    }
    else if (teplotaVenku < 20 && teplotaVenku > 10)
    {
        printf("Venku se trochu ochladilo, vem si mikinu a dlouhé kalhoty.\n");
    }
    else if (teplotaVenku <= 10 && teplotaVenku >= 0)
    {
        printf("Venku je zima, vem si lehčí bundu.\n");
    }
    else if (teplotaVenku < 0)
    {
        printf("Venku opravdu mrzne, vem si zimní bundu.\n");
    }

    return 0; // konec programu
}

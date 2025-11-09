// KVADRATICKÁ ROVNICE
#include <stdio.h>

int main() {
    // Kvadratická rovnice má tvar: ax² + bx + c = 0
    // Budeme počítat diskriminant: D = b² - 4ac

    int prvniCislo;        // hodnota a
    int druheCislo;        // hodnota b
    int tretiCislo;        // hodnota c
    int diskriminantCislo; // výsledek diskriminantu D

    // uživatel zadá tři čísla a, b, c
    printf("Zadejte koeficienty a, b, c (oddělené mezerou): ");
    scanf("%d%d%d", &prvniCislo, &druheCislo, &tretiCislo);

    // výpočet diskriminantu podle vzorce D = b² - 4ac
    diskriminantCislo = (druheCislo * druheCislo) - 4 * prvniCislo * tretiCislo;

    // kontrola, zda je diskriminant v rozumném rozsahu (-999 až 999)
    if (diskriminantCislo >= -999 && diskriminantCislo <= 999)
    {
        printf("+----------------------+\n");
        printf("a = %d\nb = %d\nc = %d\nDiskriminant = %d\n", prvniCislo, druheCislo, tretiCislo, diskriminantCislo);
        printf("+----------------------+\n");
        
        if (diskriminantCislo > 0)
        {
            // D > 0 → dva různé reálné kořeny
            printf("Výsledek: Dva reálné kořeny\n");
        }
        else if (diskriminantCislo == 0)
        {
            // D = 0 → jeden dvojnásobný (dvojitý) kořen
            printf("Výsledek: Jeden dvojnásobný kořen\n");
        }
        else
        {
            // D < 0 → nemá žádné reálné kořeny (pouze komplexní)
            printf("Výsledek: Nemá reálné kořeny\n");
        }
    }
    else
    {
        // ochrana proti extrémním hodnotám
        printf("Diskriminant mimo povolený interval!\n");
    }

    return 0; // konec programu
}

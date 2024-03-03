#include <stdio.h>

// Funktion zur Berechnung der Binärdarstellung einer Dezimalzahl
void printBinary(unsigned long long decimal) {
    // Iteration über die Bitpositionen
    for (int i = 63; i >= 0; i--) {
        // Berechnung der aktuellen Potenz von 2
        unsigned long long powerOfTwo = 1ULL << i;

        // Überprüfen, ob die aktuelle Potenz von 2 in die Dezimalzahl passt
        if (decimal >= powerOfTwo) {
            printf("1");
            decimal -= powerOfTwo; // Abziehen der aktuellen Potenz von 2 von der Dezimalzahl
        } else {
            printf("0");
        }
    }
}

int main() {
    unsigned long long decimal = 0;
A:
    // Eingabe der Dezimalzahl
    printf("Gib eine ganze Zahl zwischen 0 und 18.446.744.073.709.551.615 ein: ");
    scanf("%llu", &decimal);
    printf("------------------------------\n");

if (decimal<=0||decimal>=18446744073709551615)
{
    printf("Ungültig\n------------------------------\n");

    goto A;
}

    // Ausgabe der Binärdarstellung
    printf("Binärdarstellung: ");
    printBinary(decimal);
    printf("\n");

    return 0;
}
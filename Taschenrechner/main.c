
#include <stdio.h>

void zeigeMenue() {
    printf("********** Taschenrechner **********\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraktion (-)\n");
    printf("3. Multiplikation (*)\n");
    printf("4. Division (/)\n");
    printf("5. Beenden\n");
}

int main() {
    int auswahl;
    double num1, num2, ergebnis;

    do {
        zeigeMenue();
        printf("Wähle eine Operation (1-5): ");
        scanf("%d", &auswahl);

        if (auswahl >= 1 && auswahl <= 4) {
            printf("Gib die erste Zahl ein: ");
            scanf("%lf", &num1);
            printf("Gib die zweite Zahl ein: ");
            scanf("%lf", &num2);
        }

        switch (auswahl) {
            case 1:
                ergebnis = num1 + num2;
            printf("Ergebnis: %.2f + %.2f = %.2f\n", num1, num2, ergebnis);
            break;
            case 2:
                ergebnis = num1 - num2;
            printf("Ergebnis: %.2f - %.2f = %.2f\n", num1, num2, ergebnis);
            break;
            case 3:
                ergebnis = num1 * num2;
            printf("Ergebnis: %.2f * %.2f = %.2f\n", num1, num2, ergebnis);
            break;
            case 4:
                if (num2 != 0) {
                    ergebnis = num1 / num2;
                    printf("Ergebnis: %.2f / %.2f = %.2f\n", num1, num2, ergebnis);
                } else {
                    printf("Fehler: Division durch Null ist nicht erlaubt!\n");
                }
            break;
            case 5:
                printf("Programm beendet.\n");
            break;
            default:
                printf("Ungültige Auswahl! Bitte wähle erneut.\n");
        }

        printf("\n");

    } while (auswahl != 5);

    return 0;
}

//Führe das Programm mit ./calculator aus.
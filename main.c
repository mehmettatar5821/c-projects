#include <stdio.h>

int main() {
    int ay, yil;

    printf("Ay gir (1-12): ");
    scanf("%d", &ay);

    if (ay < 1 || ay > 12) {
        printf("Hatali ay girdin!\n");
        return 0;
    }

    if (ay == 2) {
        printf("Yil gir: ");
        scanf("%d", &yil);

        if ((yil % 4 == 0 && yil % 100 != 0) || (yil % 400 == 0))
            printf("Subat 29 gun\n");
        else
            printf("Subat 28 gun\n");
    }
    else if (ay == 4 || ay == 6 || ay == 9 || ay == 11) {
        printf("30 gun\n");
    }
    else {
        printf("31 gun\n");
    }

    return 0;
}


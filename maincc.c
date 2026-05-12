#include <stdio.h>
#include <string.h>

int main() {
    char metin[200];
    int kelime_sayisi = 1;

    printf("Bir metin girin: ");
    gets(metin); 

    
    for (int i = 0; metin[i] != '\0'; i++) {
        if (metin[i] == ' ') {
            kelime_sayisi++;
        }
    }

    printf("Tahmini kelime sayisi: %d\n", kelime_sayisi);

    // Metni tersten yazdirma
    printf("Metnin tersi: ");
    for (int i = strlen(metin) - 1; i >= 0; i--) {
        putchar(metin[i]);
    }
    printf("\n");

    return 0;
}

#include <stdio.h>

// Matrisi ekrana yazdiran basit fonksiyon
void matrisiYazdir(float mat[10][10], int satir, int sutun) {
    printf("\n--- SONUC ---\n");
    for (int i = 0; i < satir; i++) {
        for (int j = 0; j < sutun; j++) {
            printf("%.2f\t", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int secim, s1, st1, s2, st2;
    float m1[10][10], m2[10][10], sonuc[10][10];

    printf("MATRIS ISLEMI (C Dili):\n1-Toplama\n2-Carpma\nSecim: ");
    scanf("%d", &secim);

    printf("1. Matris Boyutlari (satir sutun): ");
    scanf("%d %d", &s1, &st1);

    // 1. Matris Girisi
    for (int i = 0; i < s1; i++) {
        for (int j = 0; j < st1; j++) {
            printf("Matris1 [%d][%d]: ", i + 1, j + 1);
            scanf("%f", &m1[i][j]);
        }
    }

    printf("2. Matris Boyutlari (satir sutun): ");
    scanf("%d %d", &s2, &st2);

    if (secim == 1) { // TOPLAMA
        if (s1 != s2 || st1 != st2) {
            printf("Hata: Toplama icin boyutlar ayni olmali!\n");
        } else {
            for (int i = 0; i < s2; i++) {
                for (int j = 0; j < st2; j++) {
                    printf("Matris2 [%d][%d]: ", i + 1, j + 1);
                    scanf("%f", &m2[i][j]);
                    sonuc[i][j] = m1[i][j] + m2[i][j];
                }
            }
            matrisiYazdir(sonuc, s1, st1);
        }
    } 
    else if (secim == 2) { // CARPMA
        if (st1 != s2) {
            printf("Hata: 1. Matrisin sutunu 2. Matrisin satirina esit olmali!\n");
        } else {
            for (int i = 0; i < s2; i++) {
                for (int j = 0; j < st2; j++) {
                    printf("Matris2 [%d][%d]: ", i + 1, j + 1);
                    scanf("%f", &m2[i][j]);
                }
            }
            // Carpma islemi
            for (int i = 0; i < s1; i++) {
                for (int j = 0; j < st2; j++) {
                    sonuc[i][j] = 0;
                    for (int k = 0; k < st1; k++) {
                        sonuc[i][j] += m1[i][k] * m2[k][j];
                    }
                }
            }
            matrisiYazdir(sonuc, s1, st2);
        }
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>  

 
void notlariAl(float dizi[], int adet);
float ortalamaHesapla(float dizi[], int adet);

int main() {
    float notlarim[100]; 
    int ders_adedi;
    float ortalama;

    printf("Kac adet dersin var: ");
    scanf("%d", &ders_adedi);

    if (ders_adedi <= 0 || ders_adedi > 100) {
        printf("Gecersiz sayi! (1-100 arasi girin)\n");
        return 0;
    }

    
    notlariAl(notlarim, ders_adedi);
    ortalama = ortalamaHesapla(notlarim, ders_adedi);

    printf("\n--- SONUC ---");
    printf("\nOrtalamaniz: %.2f\n", ortalama);

    if (ortalama >= 50) {
        printf("Durum: GECTINIZ\n");
    } else {
        printf("Durum: KALDiniz\n");
    }

    printf("----------------\n");
    
    
    system("pause"); 
    return 0;
}
 
void notlariAl(float dizi[], int adet) {
    int i; 
    for (i = 0; i < adet; i++) {
        printf("%d. ders notu: ", i + 1);
        scanf("%f", &dizi[i]);
    }
}

float ortalamaHesapla(float dizi[], int adet) {
    int i;
    float toplam = 0;
    for (i = 0; i < adet; i++) {
        toplam += dizi[i];
    }
    return toplam / adet;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int uzunluk;
    int i;
    int rastgele_indeks;
    int havuz_boyutu;
    
    // Þifrede kullanýlacak karakter havuzu
    char havuz[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    // Bilgisayarýn her seferinde farklý þifre üretmesi için
    srand(time(NULL));
    
    // Havuzun boyutunu otomatik hesapla
    havuz_boyutu = sizeof(havuz) - 1;

    printf("--- RASTGELE SIFRE OLUSTURUCU ---\n");
    printf("Sifreniz kac karakter uzunlugunda olsun?: ");
    scanf("%d", &uzunluk);

    if (uzunluk < 4 || uzunluk > 50) {
        printf("Lutfen 4 ile 50 arasinda bir uzunluk girin!\n");
        return 0;
    }

    printf("\nOlusturulan Sifre: ");
    
    // Deðiþken tanýmý yukarýda olduðu için bu döngü asla hata vermez
    for (i = 0; i < uzunluk; i++) {
        rastgele_indeks = rand() % havuz_boyutu;
        printf("%c", havuz[rastgele_indeks]);
    }
    
    printf("\n\nIslem tamamlandi!\n");
    return 0;
}

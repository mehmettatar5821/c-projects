#include <stdio.h>

int main() {
    int limit, i, j, asal_mi;

    printf("--- ASAL SAYI BULUCU ---\n");
    printf("Hangi sayiya kadar olan asallari gormek istersin?: ");
    scanf("%d", &limit);

    printf("\n1 ile %d arasindaki asal sayilar:\n", limit);

    // 2'den baslayarak limit degerine kadar her sayiyi kontrol et
    for (i = 2; i <= limit; i++) {
        asal_mi = 1;  
        
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                asal_mi = 0;  
                break;        
            }
        }

         
        if (asal_mi == 1) {
            printf("%d ", i);
        }
    }

    printf("\n\nIslem tamamlandi.\n");
    return 0;
}

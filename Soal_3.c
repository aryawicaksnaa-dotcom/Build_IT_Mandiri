#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MOD 1000000007

long long koin[1000005];

int pembanding(const void *a, const void *b) {
    long long nilai1 = *(long long*)a;
    long long nilai2 = *(long long*)b;
    return (nilai1 > nilai2) - (nilai1 < nilai2);
}

int main() {
    int jumlah_koin;
    if (scanf("%d", &jumlah_koin) != 1) return 0;

    for (int i = 0; i < jumlah_koin; i++) {
        scanf("%lld", &koin[i]);
    }

    qsort(koin, jumlah_koin, sizeof(long long), pembanding);

    long long total_pasangan = 0;
    long long koin_lebih_kecil = 0;

    for (int i = 0; i < jumlah_koin; i++) {
        if (i > 0 && koin[i] > koin[i - 1]) {
            koin_lebih_kecil = i; 
        }
        
        total_pasangan = (total_pasangan + koin_lebih_kecil) % MOD;
    }

    printf("%lld\n", total_pasangan);

    return 0;
}

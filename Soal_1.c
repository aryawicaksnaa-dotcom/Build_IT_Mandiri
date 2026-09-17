#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
     long long n;
     if (scanf("%lld", &n) != 1) {
        return 0;
     }   
     
     long long total_sum = 0;
     for (long long i = 0; i < n; i++) {
        long long nilai;
        scanf("%lld", &nilai);
        total_sum += nilai;
     }
     
     if (total_sum < 0) {
        total_sum = -total_sum;
     }
     
     printf("%lld\n", total_sum);
     
    return 0;
}

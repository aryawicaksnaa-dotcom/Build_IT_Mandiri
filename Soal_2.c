#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b, c, ronde = 0;
    if  (scanf("%d %d %d", &a, &b, &c) != 3) return 0;
    
    while (a != b && b != c && a != c) {
        if (a > b && a > c) {
            a--;
            if (b < c) b++; else c++;
        } else if (b > a && b > c) {
            b--;
            if (a < c) a++; else c++;
        } else {
            c--;
            if (a < b) a++; else b++;
    }    
    ronde++;
    }
    
    printf("%d\n", ronde);
    
    return 0;
}

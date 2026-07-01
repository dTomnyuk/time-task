#include <stdio.h>

int main() {
    int p;
    
    if (scanf("%d", &p) != 1 || p < 1 || p > 30) {
        return 0;
    }

    if (p == 1) {
        printf("2\n");
        return 0;
    }
    if (p == 2) {
        printf("4\n"); 
        return 0;
    }

    long long dp_A = 2; 
    long long dp_B = 0; 

    for (int i = 2; i <= p; i++) {
        long long next_A = dp_A + dp_B;
        long long next_B = dp_A;

        dp_A = next_A;
        dp_B = next_B;
    }

    long long total = dp_A + dp_B;

    printf("%lld\n", total);

    return 0;
}

#include <stdio.h>

long long nsd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long nsk(long long a, long long b) {
    if (a == 0 || b == 0) return 0;
    return (a / nsd(a, b)) * b;
}

int main() {
    int p;
    
    if (scanf("%d", &p) != 1) {
        return 0;
    }

    long long current_nsk;
    long long next_num;

    if (scanf("%lld", &current_nsk) != 1) {
        return 0;
    }

    for (int i = 1; i < p; i++) {
        if (scanf("%lld", &next_num) == 1) {
            current_nsk = nsk(current_nsk, next_num);
        }
    }

    printf("%lld\n", current_nsk);

    return 0;
}

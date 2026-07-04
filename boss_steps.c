#include <stdio.h>

int main() {
    long long x, y;

    if (scanf("%lld %lld", &x, &y) != 2) {
        return 0;
    }

    long long d = y - x;

    if (d == 0) {
        printf("0\n");
        return 0;
    }

    long long steps = 0;
    long long max_distance = 0;
    long long k = 1; 

    while (max_distance < d) {
        steps++;
        max_distance += k;
        if (max_distance >= d) break;

        steps++;
        max_distance += k;
        if (max_distance >= d) break;

        k++;
    }

    printf("%lld\n", steps);

    return 0;
}

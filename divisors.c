#include <stdio.h>

int main() {
    int n;
    int count = 0;

    printf("Введіть натуральне число n: ");
    
    if (scanf("%d", &n) != 1) {
        return 0;
    }

    for (int m = 1; m < n; m++) {
        int quotient = n / m;  
        int remainder = n % m;

        if (quotient == remainder) {
            count++;
        }
    }

    printf("Кількість рівних дільників числа %d: %d\n", n, count);

    return 0;
}

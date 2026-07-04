#include <stdio.h>
#include <stdlib.h>

int main() {
    long long x1, y1, r1, x2, y2, r2;

    if (scanf("%lld %lld %lld %lld %lld %lld", &x1, &y1, &r1, &x2, &y2, &r2) == 6) {
 
        long long d_sq = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
        
        long long r_sum_sq = (r1 + r2) * (r1 + r2);     
        long long r_diff_sq = (r1 - r2) * (r1 - r2);    

        if (d_sq == 0 && r1 == r2) {
            printf("-1\n");
        }
 
        else if (d_sq < r_diff_sq || d_sq > r_sum_sq) {
            printf("0\n");
        }
        else if (d_sq == r_diff_sq || d_sq == r_sum_sq) {
            printf("1\n");
        }
        else {
            printf("2\n");
        }
    }

    return 0;
}

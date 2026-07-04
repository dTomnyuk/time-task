#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2;

    if (scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2) == 4) {
 
        double dx = x2 - x1;
        double dy = y2 - y1;
  
        double length = sqrt(dx * dx + dy * dy);
  
        printf("%.6lf\n", length);
        
    }
    
    return 0;
}

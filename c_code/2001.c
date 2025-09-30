#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2;
    while (scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2) == 4) {
        double dist = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
        printf("%.2f\n", dist);
    }
    return 0;
}
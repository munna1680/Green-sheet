#include <stdio.h>

int main() {
    int time, speed;
    double distance, fuel_needed;
    const double fuel_efficiency = 12.0; 
    scanf("%d %d", &time, &speed);
    distance = time * speed;
    fuel_needed = distance / fuel_efficiency;
    printf("%.3lf\n", fuel_needed);
    return 0;
}

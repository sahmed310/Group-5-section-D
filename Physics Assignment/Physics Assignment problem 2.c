#include <stdio.h>
#include <math.h>

int main() {
    double angle_deg = 45.0;
    double angle_rad = angle_deg * (M_PI / 180.0);
    double ratio = 1 / sin(angle_rad);

    printf("The ratio of the slit width to the wavelength is: %.2f\n", ratio);

    return 0;
}

#include <stdio.h>
#include <math.h>

void print_color(double wavelength) {
    if (wavelength >= 380 && wavelength < 450) {
        printf("Color: Violet\n");
    } else if (wavelength >= 450 && wavelength < 485) {
        printf("Color: Blue\n");
    } else if (wavelength >= 485 && wavelength < 500) {
        printf("Color: Cyan\n");
    } else if (wavelength >= 500 && wavelength < 565) {
        printf("Color: Green\n");
    } else if (wavelength >= 565 && wavelength < 590) {
        printf("Color: Yellow\n");
    } else if (wavelength >= 590 && wavelength < 625) {
        printf("Color: Orange\n");
    } else if (wavelength >= 625 && wavelength <= 750) {
        printf("Color: Red\n");
    }
}

int main() {
    double wavelength, d, theta;
    printf("Enter the wavelength (in nm): ");
    scanf("%lf", &wavelength);

    if (wavelength < 380 || wavelength > 750) {
        printf("Out of the range. Please enter a valid number.\n");
        return 1;
    }

    printf("Enter the slit separation (in µm): ");
    scanf("%lf", &d);

    printf("Enter the angle of diffraction (in degrees): ");
    scanf("%lf", &theta);

    theta = theta * M_PI / 180.0;
    d = d * 1e-6;
    wavelength = wavelength * 1e-9;

    int m = (int)(d * sin(theta) / wavelength + 0.5);

    printf("Order of maxima: %d-th order maxima\n", m);
    print_color(wavelength * 1e9);

    return 0;
}

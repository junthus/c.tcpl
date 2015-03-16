#include <stdio.h>

float fahrToCelsius(float f);

int main() {
    float fahr;

    fahr = getchar();

    printf("%3.1f\n", fahrToCelsius(fahr));

    return 0;
}

float fahrToCelsius(float fahr) {
    float celsius;

    celsius = (5.0/9.0) * (fahr-32.0);

    return celsius;
}
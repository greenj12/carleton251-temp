#include <stdio.h>

int main() {
    printf("Enter a temperature in Fahrenheit:");
    float temp_f;
    if (scanf("%f", &temp_f) != 1) {
        printf("Read Error, please enter a number.\n");
    } else {
        float temp_c;
        temp_c = (temp_f - 32) * 5/9;
        //printf("Your input was %f\n", temp_f);
        printf("That's %f degrees Celsius.\n", temp_c);
    };
}
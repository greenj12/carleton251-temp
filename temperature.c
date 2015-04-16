#include <stdio.h>

int main() {
    printf("Enter a temperature in Fahrenheit:");
    float temp_f;
    scanf("%f", &temp_f);
    float temp_c;
    temp_c = (temp_f - 32) * 5/9;
    
    printf("That's %f degrees Celsius.\n", temp_c);
}
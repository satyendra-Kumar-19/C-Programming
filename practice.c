#include <stdio.h>

#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    printf("This program will convert :\ncelcius to fahrenheit or fahrenheit to celcius.\ncelcius to kelvin or kelvin to celcius.\nfahrenheit to kelvin or kelvin to fahrenheit.\n\n");
    float C, F, K;
    printf("IF you want to convert celcius to fahrenheit or kelvin, Enter C: \nIF you want to convert fahrenheit to celcius or kelvin, Enter F:\nIF you want to convert kelvin to celcius or fahrenheit, Enter K:\n");
    char choice;
    scanf(" %c", &choice);
    if(choice == 'C' || choice == 'c') {
    printf("Enter the temperature in celcius: ");
    scanf("%f", &C);
    F = (C * 9/5) + 32;
    K = C + 273.15;
    printf("The temperature in fahrenheit is %.2f°F.\n", F);
    printf("The temperature in kelvin is %.2fK.\n", K);
    } else if(choice == 'F' || choice == 'f') {
    printf("Enter the temperature in fahrenheit: "); 
    scanf("%f", &F);
    C = (F - 32) * 5/9;
    K = C + 273.15;
    printf("The temperature in celcius is %.2f°C.\n", C);
    printf("The temperature in kelvin is %.2fK.\n", K);
    } else if(choice == 'K' || choice == 'k') {
    printf("Enter the temperature in kelvin: ");
    scanf("%f", &K);
    C = K - 273.15;
    F = (C * 9/5) + 32;
    printf("The temperature in celcius is %.2f°C.\n", C);
    printf("The temperature in fahrenheit is %.2f°F.\n", F);
    } else {
    printf("Invalid input. Please enter C, F, or K.\n");
    }

    return 0;
}
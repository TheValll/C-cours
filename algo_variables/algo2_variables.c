// 2. Conversion Celsius-Fahrenheit

// Crée un programme qui convertit une température de Celsius en Fahrenheit ou inversement selon le choix de l'utilisateur.

#include <stdio.h>

int main(){
    
    float celsiusTemp = 21;
    float fahrenheitTemp;

    fahrenheitTemp = (celsiusTemp * 9/5) + 32;

    printf("%.1f Celsius en Fahrenheit donne %.1f", celsiusTemp, fahrenheitTemp);
    return 0;
}
// 4. Calcul de l'aire et du périmètre d'un cercle

// Crée un programme qui calcule l'aire et le périmètre d'un cercle à partir du rayon fourni par l'utilisateur.

#include <stdio.h>
#include <math.h>

int main(){
    float radius = 12.3;
    const float PI = 2.14;

    float perimeter = 2 * PI * radius;
    float area = PI * pow(radius, 2);

    printf("The perimeter of the cercle with a raidus of %.2f is %.2f and the area is %.2f", radius, perimeter, area);
    return 0;
}
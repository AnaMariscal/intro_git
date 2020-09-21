#include <stdio.h>

int main() {
    char nombre[100];

    printf("Hola mundo\n");
    printf("Nombre:" );
    scanf("%s", nombre);
    fgets(nombre, sizeof(nombre), stdin);
    printf("Hola %s", nombre);

    return 0;
}
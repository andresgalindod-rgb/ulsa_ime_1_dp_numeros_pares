#include <iostream>
#include "utilerias.h"

int main() {
    const int CANTIDAD = 5;

    int pares[CANTIDAD] = {0};
    int totalPares = 0;

    std::cout << "Guardar los numeros pares de " << CANTIDAD << " numeros\n";

    int contador = 0;
    while (contador < CANTIDAD) {
        int numero = leerEntero("Escribe un numero: ");
        std::cout << "Escribiste: " << numero << "\n";
        if (numero % 2 == 0) {
            std::cout << "Es par\n";
            pares[totalPares] = numero;
            totalPares = totalPares + 1;
        } else {
            std::cout << "Es impar\n";
        }
        contador = contador + 1;
    }

    std::cout << "Pares encontrados: " << totalPares << "\n";

    for (int i = 0; i < totalPares; i++) {
        std::cout << "pares[" << i << "] = " << pares[i] << "\n";
    }

    return 0;
}

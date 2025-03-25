#include <iostream>
using namespace std;

// Función recursiva para calcular el factorial
int factorial(int n) {
    // Si el número es negativo, lanza una excepción
    if (n < 0) {
        throw invalid_argument("Error: Factorial de un número negativo no está definido.");
    }
    // Casos base: factorial(0) y factorial(1) son 1
    if (n == 0 || n == 1) {
        return 1;
    }
    // Caso recursivo: n * factorial(n - 1)
    return n * factorial(n - 1);
}

int main() {
    try {
        int numero;
        cout << "Introduce un número para calcular el factorial: ";
        cin >> numero;  // Entrada del usuario
        int resultado = factorial(numero);  // Llamada a la función factorial
        cout << "El factorial de " << numero << " es: " << resultado << endl;
    }
    catch (const exception& e) {  // Captura cualquier excepción estándar
        cerr << "Excepción capturada: " << e.what() << endl;
    }
    catch (...) {  // Captura cualquier otro tipo de error desconocido
        cerr << "Se ha producido un error desconocido." << endl;
    }
    return 0;
}

#include <iostream>
#include <stdexcept>    // Se incluye para poder lanzar excepciones
using namespace std;

// Función recursiva para calcular Fibonacci, lanzando una excepción si el número es negativo
int fibonacci(int n) {
    if (n < 0) {
        throw invalid_argument("Error: No existe Fibonacci de un número negativo.");
    }
    if (n == 0) return 0; // Caso base: Fibonacci(0)
    if (n == 1) return 1; // Caso base: Fibonacci(1)
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursión
}

int main() {
    int num;
    cout << "Ingrese un número: ";
    cin >> num;

    try {
        cout << "El número de Fibonacci en la posición " << num << " es: " << fibonacci(num) << endl;
    }
    catch (const invalid_argument& e) {  // Maneja la excepción si el número es negativo
        cerr << e.what() << endl;
    }

    return 0;
}

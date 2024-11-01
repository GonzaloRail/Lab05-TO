#include <iostream>
#include <vector>
#include <stdexcept>

template <typename T>
class Pila {
private:
    std::vector<T> elementos;  // Vector para almacenar los elementos de la pila

public:
    // Método para insertar un elemento en la pila
    void push(const T& elemento) {
        elementos.push_back(elemento);
    }

    // Método para eliminar y retornar el elemento superior de la pila
    T pop() {
        if (esVacia()) {
            throw std::runtime_error("Error: La pila está vacía.");
        }
        T elemento = elementos.back();
        elementos.pop_back();
        return elemento;
    }

    // Método para ver el elemento superior de la pila sin eliminarlo
    T top() const {
        if (esVacia()) {
            throw std::runtime_error("Error: La pila está vacía.");
        }
        return elementos.back();
    }

    // Método para verificar si la pila está vacía
    bool esVacia() const {
        return elementos.empty();
    }

    // Método para obtener el tamaño de la pila
    size_t tamaño() const {
        return elementos.size();
    }
};

int main() {
    Pila<int> pilaEnteros;  // Pila para enteros
    pilaEnteros.push(1);
    pilaEnteros.push(2);
    pilaEnteros.push(3);

    std::cout << "Elemento superior: " << pilaEnteros.top() << std::endl;  // Debe imprimir 3

    while (!pilaEnteros.esVacia()) {
        std::cout << "Desapilando: " << pilaEnteros.pop() << std::endl;  // Debe imprimir 3, 2, 1
    }

    Pila<char> pilaCaracteres;  // Pila para caracteres
    pilaCaracteres.push('A');
    pilaCaracteres.push('B');
    pilaCaracteres.push('C');

    std::cout << "Elemento superior: " << pilaCaracteres.top() << std::endl;  // Debe imprimir 'C'

    while (!pilaCaracteres.esVacia()) {
        std::cout << "Desapilando: " << pilaCaracteres.pop() << std::endl;  // Debe imprimir 'C', 'B', 'A'
    }

    return 0;
}

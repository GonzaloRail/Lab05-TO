#include <iostream>
#include <string>

// Nodo de la lista enlazada
template <typename T>
class Nodo {
public:
    T dato;               // Dato del nodo
    Nodo* siguiente;      // Puntero al siguiente nodo

    // Constructor
    Nodo(T valor) : dato(valor), siguiente(nullptr) {}
};

// Clase de la lista enlazada
template <typename T>
class ListaEnlazada {
private:
    Nodo<T>* cabeza;      // Cabeza de la lista

public:
    // Constructor
    ListaEnlazada() : cabeza(nullptr) {}

    // Destructor
    ~ListaEnlazada() {
        liberarMemoria();
    }

    // Método para agregar un elemento al final de la lista
    void agregar(T valor) {
        Nodo<T>* nuevoNodo = new Nodo<T>(valor);
        if (cabeza == nullptr) {
            cabeza = nuevoNodo;
        } else {
            Nodo<T>* actual = cabeza;
            while (actual->siguiente != nullptr) {
                actual = actual->siguiente;
            }
            actual->siguiente = nuevoNodo;
        }
    }

    // Método para imprimir la lista
    void imprimir() const {
        Nodo<T>* actual = cabeza;
        while (actual != nullptr) {
            std::cout << actual->dato << " -> ";
            actual = actual->siguiente;
        }
        std::cout << "nullptr" << std::endl; // Indicar el final de la lista
    }

    // Método para liberar la memoria de la lista
    void liberarMemoria() {
        Nodo<T>* actual = cabeza;
        while (actual != nullptr) {
            Nodo<T>* temp = actual;
            actual = actual->siguiente;
            delete temp;
        }
        cabeza = nullptr; // Asegurar que la cabeza sea nullptr
    }
};

int main() {
    // Crear una lista de edades (números enteros)
    ListaEnlazada<int> listaEdades;
    listaEdades.agregar(25);
    listaEdades.agregar(30);
    listaEdades.agregar(22);
    std::cout << "Lista de Edades: ";
    listaEdades.imprimir();

    // Crear una lista de palabras (cadenas de texto)
    ListaEnlazada<std::string> listaPalabras;
    listaPalabras.agregar("Hola");
    listaPalabras.agregar("Mundo");
    listaPalabras.agregar("El curso de TO");
    listaPalabras.agregar("Voy a ");
    listaPalabras.agregar("Aprobar");

    std::cout << "Lista de Palabras: ";
    listaPalabras.imprimir();

    return 0;
}

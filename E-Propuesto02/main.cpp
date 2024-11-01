#include <iostream>
using namespace std;

// Plantilla de clase Contendor
template <class T>
class Contendor {
public:
    T elemento;

    Contendor(T arg) { elemento = arg; }
    T add() { return ++elemento; }
};

// Especialización de la plantilla para tipo char
template <>
class Contendor<char> {
public:
    char elemento;

    Contendor(char arg) { elemento = arg; }
    char uppercase() {
        if (elemento >= 'a' && elemento <= 'z') {
            elemento += 'A' - 'a';
        }
        return elemento;
    }
};

int main() {
    Contendor<int> cint(5);
    Contendor<char> cchar('t');

    cout << cint.add() << endl;
    cout << cchar.uppercase() << endl;

    return 0;
}

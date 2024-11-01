#include <iostream>
using namespace std;

// Plantilla de clase Comuni con valores por defecto para T y N
template <class T = char, int N = 8>
class Comuni {
public:
    T bloque[N];

    void set(int num, T tval);
    T get(int num);
};

// Definición de la función miembro set fuera de la clase
template <class T, int N>
void Comuni<T, N>::set(int num, T tval) {
    bloque[num] = tval;
}

// Definición de la función miembro get fuera de la clase
template <class T, int N>
T Comuni<T, N>::get(int num) {
    return bloque[num];
}

int main() {
    Comuni<int, 5> objInt;
    Comuni<double> objFloat;
    Comuni<> obj;

    objInt.set(0, 10);
    objFloat.set(2, 3.1);

    cout << objInt.get(0) << endl;
    cout << objFloat.get(2) << endl;
    cout << obj.get(4) << endl;

    return 0;
}

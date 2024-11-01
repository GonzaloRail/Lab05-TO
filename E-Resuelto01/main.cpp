
#include <iostream>

using namespace std;

template<typename mitipo>
mitipo aritmetica(mitipo x, mitipo y) {
    return x + y;
}







template <typename Tipo>
Tipo mayorDe(Tipo a, Tipo b) {
    return (a > b) ? a : b;
}






template<typename T>
class Contenedor {
public:
    T metodo1(int xx) {
        return array[xx];
    }

    void metodo2(T val, int i) {
        array[i] = val;
    }

    void mostrar() const;

private:
    T array[4];
};


template<typename T>
void Contenedor<T>::mostrar() const {
    for (int i = 0; i <= 4; i++) {
        cout << array[i] << " ";
    }
}



int main() {
    cout<<"////////////////////////////////////////////////////////////////////"<<endl;

    //PARTE A

    cout<<"PARTE A"<<endl;
    int resultado_int = aritmetica<int>(10, 45);
    double resultado_double = aritmetica<double>(3.45, 8.10);
    float resultado_float = aritmetica<float>(0.14f, 0.147f);

    // Imprimimos los resultados
    cout << "Resultado (int): " << resultado_int << endl;
    cout << "Resultado (double): " << resultado_double << endl;
    cout << "Resultado (float): " << resultado_float << endl;

    cout<<"////////////////////////////////////////////////////////////////////"<<endl;
    cout<<"PARTE B"<<endl;
    //PARTE B
    // Invocar a función template de mayor de
    char x = mayorDe<char>('e', 'z');
    int y = mayorDe<int>(9, 4);

    cout << "caracter mayor: " << x << endl;
    cout << "numero mayor: " << y << endl;


    cout<<"////////////////////////////////////////////////////////////////////"<<endl;

    //PARTE C
    cout<<"PARTE C"<<endl;

    Contenedor<int> z;
    z.metodo2(10, 0);
    z.metodo2(50, 1);
    z.metodo2(60, 2);
    z.metodo2(70, 3);
    z.mostrar();




    cout<<"\n////////////////////////////////////////////////////////////////////"<<endl;








    return 0;
}

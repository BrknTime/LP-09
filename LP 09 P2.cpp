#include <iostream>
#include <vector>

using namespace std;

class Fueraderango {
public:
    Fueraderango(int indice) : indice(indice) {}

    int getIndice() const {
        return indice;
    }

    void mostrarError() const {
        cout<<"ERR0R: Indice fuera de rango"<<endl;
        cout<<"El indice ingresado fue: "<<indice<<endl;
    }

private:
    int indice;
};

void mostrarArreglo(const vector<int>& arreglo) {
    cout << "Elementos del arreglo: ";
    for (int elemento : arreglo) {
        cout<<elemento<<" ";
    }
    cout<<endl;
}

int main() {
    vector<int> arreglo = {1, 2, 3, 4, 5};

    int opcion;
    do {
        mostrarArreglo(arreglo);

        int indice;
        cout<<"Ingrese un índice para acceder al elemento del arreglo"<<endl;
        cout<<"0) Para salir..."<<endl;
        cin>>indice;

        if (indice == 0) {
            break;
        }

        try {
            if (indice < 0 || indice >= arreglo.size()) {
                throw Fueraderango(indice);
            }

            int elemento = arreglo[indice];
            cout<<"Elemento en el índice "<<indice<<": "<<elemento<<endl;
        } catch (const Fueraderango& e) {
            e.mostrarError();
        }
        
        cout<<"Desea agregar un nuevo elemento al arreglo?"<<endl;
        cout<<"0) Salir\n1) Si\n2) No"<<endl;
        cin>>opcion;

        if (opcion == 1) {
            int nuevoElemento;
            cout<<"Ingrese el nuevo elemento: ";
            cin>>nuevoElemento;

            arreglo.push_back(nuevoElemento);
        }

    } while (opcion != 0);

    return 0;
}

#include <iostream>
#include <vector>

using namespace std;

int main() {

    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<"==============ARREGLO=============="<<endl;
    cout<<"Indices disponibles para el arreglo: ";
    for (int i = 0; i < size; i++) {
        cout<<i<<" ";
    }
    cout<<endl;

    int index;
    bool validIndex = false;
    while (!validIndex) {
        cout<<"Ingrese un indice para acceder al elemento del arreglo: ";
        cin>>index;

        if (index >= 0 && index < size) {
            validIndex = true;
        } else {
            cout<<"ERR0R: Indice fuera de rango, ingresar nuevamente"<<endl;
        }
    }

    int element = arr[index];
    cout<<"Elemento en el indice "<<index<<": "<<element<<endl;

    vector<int> vec = {1, 2, 3, 4, 5};
    size = vec.size();
    cout<<"==============VECT0RES=============="<<endl;
    cout<<"Índices disponibles para el vector: ";
    for (int i = 0; i < size; i++) {
        cout<<i<<" ";
    }
    cout<<endl;

    validIndex = false;
    while (!validIndex) {
        cout<<"Ingrese un indice para acceder al elemento del vector: ";
        cin>>index;

        if (index >= 0 && index < size) {
            validIndex = true;
        } else {
            cout<<"ERR0R: Indice fuera de rango, ingresar nuevamente"<<endl;
        }
    }

    element = vec[index];
    cout<<"Elemento en el indice "<<index<<": "<<element<<endl;

    return 0;
}

#include<iostream>
#include<string>
using namespace std;

int main() {
    string cadena;
    cout << "Ingresa una cadena: ";
    getline(cin, cadena);
    
    cout << "La longitud de la cadena es: " << cadena.length() << endl;
    
    return 0;
}


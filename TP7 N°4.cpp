#include<iostream>
#include<string>
using namespace std;

int main() {
    string cadena;
    char caracter;
    int contador = 0;
    
    cout << "Ingresa una cadena: ";
    getline(cin, cadena);
    cout << "Ingresa el caracter que quieres contar: ";
    cin >> caracter;
    
    for (int i = 0; i < cadena.length(); i++) {
        if (cadena[i] == caracter) {
            contador++;
        }
    }
    
    cout << "El carácter '" << caracter << "' aparece " << contador << " veces." << endl;
    
    return 0;
}



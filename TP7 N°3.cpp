#include<iostream>
#include<string>
#include<algorithm> 
using namespace std;

int main() {
    string cadena;
    cout << "Ingresa una cadena: ";
    getline(cin, cadena);
    
    reverse(cadena.begin(), cadena.end());
    cout << "El reverso de la cadena es: " << cadena << endl;
    
    return 0;
}


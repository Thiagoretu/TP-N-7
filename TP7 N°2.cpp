#include<iostream>
#include<string>
using namespace std;

int main() {
    string cadena1, cadena2;
    cout << "Ingresa la primera cadena: ";
    getline(cin, cadena1);
    cout << "Ingresa la segunda cadena: ";
    getline(cin, cadena2);
    
    string concatenacion = cadena1 + cadena2;
    cout << "La concatenación de las cadenas es: " << concatenacion << endl;
    
    return 0;
}


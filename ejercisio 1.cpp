#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string cadena;
    int longitud;
    cout << "Ingrese una cadena: ";
    getline(cin, cadena);
    longitud=cadena.size();
    
    cout << "La longitud de la cadena es: " << longitud <<endl;

    return 0;
}

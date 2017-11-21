#include <iostream>
using namespace std;

char letraDNI(unsigned int dni)
{
    return "TRWAGMYFPDXBNJZSQVHLCKE"[dni % 23];
}

int main()
{
    int dni,salir;
    cout << "Introduce el DNI: ";
    cin >> dni;
    char letra = letraDNI(dni);
    cout<<letra;
    
    
    std::cout<<"toca caulqueirx  cosa pa salir";
    std::cin>>salir;
    return 0;
    
}

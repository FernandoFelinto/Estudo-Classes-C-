#include <iostream>
#include"carro.hpp"
using namespace std;

int main()
{
    carro corsa(2006, 20000, 78000);
    cout << "Corsa -> Ano: " << corsa.getano()<< " - Valor: " << corsa.getvalor()<<" - Km: "<<corsa.getkm()<<endl;
    return 0;
}

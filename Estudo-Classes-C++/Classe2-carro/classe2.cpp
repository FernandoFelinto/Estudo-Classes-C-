#include<iostream>
using namespace std;

class carro{
    private:
    int ano; // normalmente coloca-se as variáveis no 'private'
    float valor, km;

    public:
    // construtor
    carro(int ano, float valor, float km){
    this -> ano = ano;
    this -> valor = valor;
    this -> km = km;
    }
    /* get -> saber de uma informação
     * set -> indica uma informação
     */
    //ano
    void setano(int ano){
        this -> ano = ano;

    }
    int getano(){
        return ano;
    }
    //valor
    void setvalor(float valor){
        this -> valor = valor;
    }
    float getvalor(){
        return valor;
    }
    //km
    void setkm(float km){
        this -> km = km;
    }
    float getkm(){
        return km;
    }

};

int main(){
carro palio(1999, 12000, 95000);
/*carro palio;
palio.setano(1995);
palio.setvalor(10000);
palio.setkm(150000);*/
cout <<"Palio -> " << "Ano : " << palio.getano() <<" - Valor: "<<palio.getvalor()<<" - Km: " <<palio.getkm()<<endl;
carro celta(2012, 17000, 67000);
/*carro celta;
celta.setano(2005);
celta.setvalor(15000);
celta.setkm(65000);*/
cout <<"Celta -> " << "Ano : " << celta.getano() <<" - Valor: "<<celta.getvalor()<<" - Km: " <<celta.getkm()<<endl;

return 0;
}

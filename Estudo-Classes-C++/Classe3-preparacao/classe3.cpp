#include<iostream>
using namespace std;

class carro{
    private:
    int ano; // normalmente coloca-se as variáveis no 'private'
    float valor, km;

    public:
    carro(int ano, float valor, float km);
    /* get -> saber de uma informação
     * set -> indica uma informação
     */
    //ano
    void setano(int ano);
    int getano();
    //valor
    void setvalor(float valor);
    float getvalor();
    //km
    void setkm(float km);
    float getkm();
};

int main(){
carro palio(2000, 11000, 97000);
carro celta(2012, 17000, 67000);

cout <<"Palio -> " << "Ano : " << palio.getano() <<" - Valor: "<<palio.getvalor()<<" - Km: " <<palio.getkm()<<endl;
cout <<"Celta -> " << "Ano : " << celta.getano() <<" - Valor: "<<celta.getvalor()<<" - Km: " <<celta.getkm()<<endl;

return 0;
}

carro::carro(int ano, float valor, float km){
    this -> ano = ano;
    this -> valor = valor;
    this -> km = km;
    }
    /* get -> saber de uma informação
     * set -> indica uma informação
     */
    //ano
void carro::setano(int ano){
    this -> ano = ano;

    }
    int carro::getano(){
        return ano;
    }
    //valor
    void carro::setvalor(float valor){
        this -> valor = valor;
    }
    float carro::getvalor(){
        return valor;
    }
    //km
    void carro::setkm(float km){
        this -> km = km;
    }
    float carro::getkm(){
        return km;
    }

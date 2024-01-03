//
// Created by fernando on 02/01/24.
//
#ifndef CLASSE_CARRO_CARRO_HPP
#define CLASSE_CARRO_CARRO_HPP
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

#endif //CLASSE_CARRO_CARRO_HPP

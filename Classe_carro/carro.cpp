#include<iostream>
#include"carro.hpp"
using namespace std;

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

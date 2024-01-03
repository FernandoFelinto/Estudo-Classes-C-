#include<iostream>
#include<string>
using namespace std;
/*Exercício - Desafio 11
 * Crie um algorítmo em C++ que tenha uma classe chamada 'cidadesBrasil'
 * Nesta classe, escolha atributos de cada objeto (Ex: população, ano de fundação...)
 * */
class cidadesBrasil{
    private:
    string nome_cidade, nome_estado;
    int populacao, ano_fundacao;

    public:
    //construtor
    cidadesBrasil(string nome_cidade, string nome_estado, int populacao, int ano_fundacao);
    //nome da cidade
    void setnome_cidade(string nome_cidade);
    string getnome_cidade();
    //nome do Estado
    void setnome_estado(string nome_estado);
    string getnome_estado();
    //N° da população da cidade
    void setpopulacao(int populacao);
    int getpopulacao();
    //ano de fundação da cidade
    void setano_fundacao(int ano_fundacao);
    int getano_fundacao();
};

int main(){
cidadesBrasil campina("Campina Grande", "Paraíba", 402912, 1864);
cout<<campina.getnome_cidade()<< ", Estado: "<<campina.getnome_estado()<<". Tem a população de: "<<campina.getpopulacao()<< " habitantes e foi fundada em: "<< campina.getano_fundacao()<<endl;
return 0;
}

cidadesBrasil::cidadesBrasil(string nome_cidade, string nome_estado, int populacao, int ano_fundacao){
this -> nome_cidade = nome_cidade;
this -> nome_estado = nome_estado;
this -> populacao = populacao;
this -> ano_fundacao = ano_fundacao;
}
void cidadesBrasil::setnome_cidade(string nome_cidade){
    this->nome_cidade = nome_cidade;
}
string cidadesBrasil::getnome_cidade(){
    return nome_cidade;
}
void cidadesBrasil::setnome_estado(string nome_estado){
    this->nome_estado = nome_estado;
}
string cidadesBrasil::getnome_estado(){
    return nome_estado;
}
void cidadesBrasil::setpopulacao(int populacao){
    this->populacao = populacao;
}
int cidadesBrasil::getpopulacao(){
    return populacao;
}
void cidadesBrasil::setano_fundacao(int ano_fundacao){
    this->ano_fundacao = ano_fundacao;
}
int cidadesBrasil::getano_fundacao(){
    return ano_fundacao;
}

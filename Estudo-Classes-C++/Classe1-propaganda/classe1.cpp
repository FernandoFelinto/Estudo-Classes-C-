#include<iostream>
using namespace std;

class propaganda{
    private: //será visível apenas dentro da classe

    public: // será visível em todo o programa
    void inscrever(){
    cout << "Inscreva-se no canal" << endl;
    }
    void curta(){
    cout << "Curta o vídeo" << endl;
    }
};

int main(){
propaganda canal; // chama a classe 'propaganda' e cria um objeto chamado 'canal'

canal.inscrever(); // o objeto chama as funções da classe
canal.curta();
return 0;
}

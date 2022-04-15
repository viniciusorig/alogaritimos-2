#include <iostream>

using namespace std;

struct Conversao {
    float centimetros, decimetros, milimetros;
};

struct Dados {
    float metros;
    Conversao conversao;
};

Dados converter(Dados dados);

void print(Dados dados);

int main(void){
    Dados dados;
    //print(converter(dados));
    cout << "Digite o valor para converter(em metros): ";
    cin >> dados.metros;
    cout << "--------------------------------" << endl;;
    dados = converter(dados);
    print(dados);
    return 0;
}

Dados converter(Dados dados){
    dados.conversao.decimetros = (dados.metros * 10);
    dados.conversao.centimetros = (dados.metros * 100);
    dados.conversao.milimetros = (dados.metros * 1000);
    return dados;
}

void print(Dados dados){   
    cout << fixed;
    cout.precision(2);
    cout << "o valor em metros eh: " << dados.metros << endl;
    cout << "a convercao para milimetros, centimetros e decimetro ficou:" << endl;
    cout << "decimetro: "   << dados.conversao.decimetros << endl;
    cout << "Centimetro: "  << dados.conversao.centimetros << endl;
    cout << "Milimetro: "   << dados.conversao.milimetros << endl;
}
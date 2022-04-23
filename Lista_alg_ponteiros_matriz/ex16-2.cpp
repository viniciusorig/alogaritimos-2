#include <iostream>
using namespace std;

void search(int *vetor1, int *indicator, int *tam)
{
    for (int i = 0; i < (*tam); i++)
    {
        if (vetor1[i] == *indicator)
        {
            cout << "posição "  << i+1 << " é igual" << endl;
        }
    }
    cout << "não foi encontrado mais posiçoes"  << endl;
}

void print(int *vetor1, int *indicator, int *tam){
    for (int i = 0; i < (*tam); i++){
        cout << "vetor posição " << i+1 << ": "  << vetor1[i] << endl; 
    }
}

void (*ptr[])(int *vetor1, int *indicator, int *tam) = {search, print};

int main()
{
    int vector[10] = {0, 2, 4, 8, 10, 12, 14, 16, 18, 20}, contador = 0, indicador, tamanho = 10, opcao = 0;
    cout << "Digite um numero para encontrar no array" << endl;
    cin >> indicador;
    cout << "oque deseja fazer: " <<endl;
    cout << "1- procurar indicador\t|\t2- printar vetor" << endl;
    cin >> opcao;
    (*ptr[opcao-1])(vector, &indicador, &tamanho);
}
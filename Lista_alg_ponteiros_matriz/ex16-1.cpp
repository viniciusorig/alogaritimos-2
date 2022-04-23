#include <iostream>
using namespace std;

void search(int *vetor1, int *count, int *indicator, int *tam)
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

int main()
{
    int vector[10] = {0, 2, 4, 8, 10, 12, 14, 16, 18, 20}, contador = 0, indicador, tamanho = 10;
    cout << "Digite um numero para encontrar no array" << endl;
    cin >> indicador;
    search(vector, &contador, &indicador, &tamanho);
}
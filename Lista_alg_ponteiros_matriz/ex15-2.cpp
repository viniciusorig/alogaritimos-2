#include <iostream>
using namespace std;

void original(char *str1, char *str2, int *tam)
{
    char *p = str1 + *tam;
    int q = *tam;
    for (; q > 0; q--, p--, str2++)
    {
        *str2 = *p;
    }
    *str2 -= *tam;
    for (int i = 0; i < (*tam-1); i++)
    {
        cout << str1[i] << "\t";
        cout << str2[i] << "\t" << endl;
    }
    cout << endl;
}

void tamanho(char *str1, char *str2, int *tam)
{
    original(str1, str2, tam);
    for (int i = 0, j = 3; i < (*tam-1), j < (*tam + 1); j++, i++)
    {
            cout << str1[i] << "\t" << str2[j] << "\t" << *tam << endl;
    }

}

void (*ptr[])(char *str1, char *str2, int *tam){original, tamanho};

int main()
{
    char *texto1 = "vinicius", *texto2 = new char[10];
    int opcao = 0, num = 10;
    cout << "1- erro\t|\t2- detlhamento (com pequenos erros)" << endl;
    cin >> opcao;
    (*ptr[opcao - 1])(texto1, texto2, &num);
    delete texto2;
}
#include <iostream>
using namespace std;

void reverso(char *str1, char *str2, int *tam)
{
    char *p = str1 + *tam;
    int q = *tam;
    for (; q > 0; q--, p--)
    {
        *(str2++) =  *p;
    }
    *str2 -= *tam;
    cout << str2 << endl; 
}

void tamanho(char *str1, char *str2, int *tam)
{
    reverso(str1, str2, tam);
    for (int i = 0, j = 3; i < (*tam-1), j < (*tam + 1); j++, i++)
    {
            cout << str1[i] << "\t" << str2[j] << "\t" << *tam << endl;
    }

}

int main()
{
    char *texto1 = "vinicius", *texto2 = new char[10];
    int num = 10;
    cout << texto1 << endl;
    tamanho(texto1, texto2, &num);
    delete texto2;
}
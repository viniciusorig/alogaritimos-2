#include <iostream>
using namespace std;

void soma(int vetor[4], int *x = 0)
{
    int *p, *pp;
    p = vetor;
    pp = &vetor[4];
    do{
        *x += *p; 
        p++;
    }while(p != pp);
    cout << *x << endl;
}

void sub(int vetor[4], int *x){
    int *p, *pp;
    p = vetor;
    pp = &vetor[4];
    do{
        *x -= *p; 
        p++;
    }while(p != pp);
    cout << *x << endl;
}

void (*ptr[])(int vetor[4], int *x) = {soma, sub};

int main()
{
    int vetor[] = {1, 2, 3, 4}, adicao = 0, opcao = 0;
    cout << vetor << endl;
    cout << "oque deseja fazer: "<< endl;
    cout << "1-adiçao\t|\t2-subtração" << endl;
    cin >> opcao;
    (*ptr[opcao-1])(vetor, &adicao);
}
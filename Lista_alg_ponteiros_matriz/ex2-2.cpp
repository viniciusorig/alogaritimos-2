#include <iostream>
using namespace std;

void factorial(int *n, int *f){
    int i;
    *f = 1;
    for (i = 1; i <= *n; i++){
        *f = *f * i;
    }
    cout << *f << "é o resultado final do fatorial " << *n << endl;
}

void print(int *n, int *f){
    cout << "não existe nada pra ver aqui :0";
}

void (*ptr1[])(int *n, int *f)={factorial, print};

int main(){
    int factoriallast, factorialstart, opcao;
    int *f=&factoriallast, *n=&factorialstart;
    cout << "Digite o numero fatorial que deseja: ";
    cin >> *n;
    cout << "oque deseja fazer: " << endl;
    cout << "1- imprimir o fatorial\t|\t 2-nada"<<endl;
    cin >> opcao;
    (*ptr1[opcao-1])(n, f);
}
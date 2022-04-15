#include <iostream>
using namespace std;

void funcao1(){
    cout << "funcao 1 em exução" << endl;
}
void funcao2(){
    cout << "funcao 2 em exução"<< endl;
}
void funcao3(){
    cout << "funcao 3 em exução" << endl;
}

void (*ptr_funcoes[])(void) = {funcao1, funcao2, funcao3};

int main(){
    
    int num = 0;
    cout << "digite de 1 a 3: ";
    cin >> num;

    (*ptr_funcoes[num-1])();
}

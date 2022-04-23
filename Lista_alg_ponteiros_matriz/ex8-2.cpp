#include <iostream>
using namespace std;

void calculo(int *proximas) {
    for (int i = 0; i < 11; i++){
        proximas[i] = 1986+((i*76)-(i*19));
    }
    for(int i=1; i<11; i++){
        cout << "a passagem vai ser: " << proximas[i] <<endl;
    }
}

void print(int *proximas){
    proximas[0]=1986+((0*76)+(0*19));
    cout<<"a 1 passagem foi em "<<proximas[0]<<endl;
}

void (*ptr[])(int *proximas) = {calculo, print};

int main(){
    int passagens[11], opcao, *proximas = passagens;
    cout << "oque deseja fazer"<<endl;
    cout <<"1-proximas passagens"<<endl;
    cout << "2- a ultima passagem"<<endl;
    cin >> opcao;
    (*ptr[opcao-1])(proximas);
}
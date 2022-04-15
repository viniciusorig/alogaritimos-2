#include <iostream>
using namespace std;

int somaF(int a){
    int soma = 0;
    for (int i = 0 ; i <= a; i++){
        soma = soma+i;
    }
    return soma;
}

int somaR(int b){
    if(b <= 1){
        return 1;
    }else{
        return b+somaR(b-1);
    }
}

int main(){
    cout << "for: " << somaF(5) << endl;
    cout << "recursao: " << somaR(5) << endl;
}
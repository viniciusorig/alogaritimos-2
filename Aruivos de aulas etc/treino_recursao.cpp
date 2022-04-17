#include <iostream>
using namespace std;

/*struct Potencia {
    int potencia = 3, x = 2;
};

int realizacaofor(Potencia pot){
    int aux = 0;
    if(pot.potencia >0){
        for(int i = 1; i < pot.potencia; i++ ){
            aux = aux+(pot.x*pot.x);
        }
    }
    return aux;
}*/

int realizacaorecursao(int x, int y){
    int aux;
    if(y==0){
        aux = aux+(x*x);
    }else{
        realizacaorecursao(x, y-1);
    }
}

int main(){
   // Potencia pt;
    //cout << "usando for: "<<realizacaofor(pt)<<endl;
    cout << "usando recursao: "<<realizacaorecursao(7,2)<<endl;;
}
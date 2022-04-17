#include <iostream>
using namespace std;

void sub(float *numX){
    *numX = *numX-1;
    cout << "o Valor da subtração é: " <<*numX<<endl;

}
void sum(float *numX){ 
    *numX = *numX+1;
    cout << "o Valor da adição é: " <<*numX<<endl;
}
void expo(float *numX){
    *numX = ((*numX) * (*numX)) + *numX;
    cout << "o Valor da equação é: " <<*numX<<endl;
}

void (*ptr1[])(float *numX)={sub, sum, expo};

int main(){
    int num;
    float x;
    float *numx = &x;
    cout << "Digite um Numero para realizar as operações:"<<endl;
    cout << "1 = X-1\t2 = X+1\t3 = X²+X"<<endl;
    cout<<"Digite o numero de 1 a 3: ";
    cin >> num;
    cout << "digite o numero para fazer a operação: "; 
    cin >> *numx;
    (*ptr1[num-1])(numx);
    cout << "obrigado por utilizar nossos sistemas" << endl;
}
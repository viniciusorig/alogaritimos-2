#include <iostream>
using namespace std;

void somar1(int a){
    a = a+1;
    cout << a << endl;
}

int main(){
 
    int a=5;
    
    int *p;// declaração de ponteiro que aponta para algo do tipo int

    p = &a; // ponteiro "p" aponta para o endereço de a;

    *p = 10;

    somar1(a); //chama a função de somar1 onde em um escopo diferente sera feito uma soma 

    cout << a << endl; // aqui printa 10 pois não a não rece   
}
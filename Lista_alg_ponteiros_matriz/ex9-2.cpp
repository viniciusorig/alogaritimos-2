#include <iostream>
using namespace std;

/*void swp1(int x,int y) // neste trecho faz uma troca de valores
{                           
int temp = x;            //onde a variavel temp vai receber o valor de x
x = y;                   //aqui x recebe y
y = temp;                //e por fim y recebe o valor de temp que recebeu x
}
*/

void swp1 (int *x, int *y){
    int temp = *x;
    *x=*y;
    *y = temp;
    cout << "apos o swp ficou" << endl << "x=" << *x << "\ty=" << *y << endl; 
}

void norm(int *x, int *y){
    cout << "antes do swp ficou" << endl << "x=" << *x << "\ty=" << *y << endl; 
}
 void (*ptr1[])(int *x, int *y) = {swp1, norm};
int main(){
    int X, Y, opcao, *x = &X, *y = &Y;
    cout << "Digite os valores para"<< endl << "X="; 
    cin >> *x;
    cout << "Y="; 
    cin >> *y;
    cout << "oque vc deseja fazer" << endl;
    cout << "1- apos o swp\t|\t2-apos o swp" << endl;
    cin >> opcao;
    (ptr1[opcao-1])(x, y);
}
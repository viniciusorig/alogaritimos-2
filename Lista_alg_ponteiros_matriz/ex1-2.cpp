#include <iostream>
using namespace std;

void sum(float *num1, float *num2, float *num3, float *num4, float *num5, float *num6, float *num7, float *num8, float *num9, float *num10){
    cout <<"O resultado da soma eh: ";
    cout << (*num1 + *num2 + *num3 + *num4 + *num5 + *num6 + *num7 + *num7 + *num8 + *num8 + *num9 + *num9 + *num10)-3;
}


void print(float *num1, float *num2, float *num3, float *num4, float *num5, float *num6, float *num7, float *num8, float *num9, float *num10){
    cout<< "o resultado da diferença é: " << endl;
    cout << (*num1 - *num2 - *num3 - *num4 - *num5 - *num6 - *num7 - *num7 - *num8 - *num8 - *num9 - *num9 - *num10)+1;
} 

void (*func_matriz[])(float *num1, float *num2, float *num3, float *num4, float *num5, float *num6, float *num7, float *num8, float *num9, float *num10)={sum, print};

int main(){
    int opcao;
    float a, b, c, d, e, f, g, h, i, j, x=1, y=1;
    float *ex = &a, *ex1 = &b, *ex2 = &c, *ex3 = &d, *ex4 = &e, *ex5 = &f, *ex6 = &g, *ex7 = &h, *ex8 = &i, *ex9 = &j; 
    cout << "Digite 10 termos para operacao: " << endl;
    cin >> *ex >> *ex1 >> *ex2 >> *ex3 >> *ex4 >> *ex5 >> *ex6 >> *ex7 >> *ex8 >> *ex9;
   // cout << sum(ex, ex1, ex2, ex3, ex4, ex5, ex6, ex7, ex8, ex9);
    cout << "Oque deseja fazer:" << endl;
    cout << "1- Somar\t|\t2- Diferença: ";
    cin >> opcao;
    (*func_matriz[opcao-1])(ex , ex1 , ex2 , ex3 , ex4 , ex5 , ex6 , ex7 , ex8 , ex9);
}
#include <iostream>
using namespace std;

/*A equa¸c˜ao de um c´ırculo pode ser escrita como:
(x − x0)^2 + (y − y0)^2 = r^2
Onde (x0, y0) s˜ao as coordenadas do centro do cırculo.
Escreva um programa que pergunte as coordenadas do centro de um c´ırculo e um ponto na sua
circunferencia para assim calcular o raio do cırculo, as coordenadas devem ser armazenados em
um novo tipo de dado (struct), alem disso, todo o programa deve ser modularizado e nenhum
parametro deve ser passado por parametro como valor. Finalmente, o programa deve imprimir
os coeficientes da equacao que define o cırculo na forma:
ax2 + by2 + cx + dy + e = 0
*/

struct Coordinates{
    float x3,y3,x4,y4, ray;
    float *x0 = &x3, *y0 = &y3, *x1 = &x4, *y1 = &y4, *r=&ray;

};
 
void Ray(float *x0, float *y0, float *x1, float *y1, float *r){
    *r = ((*x1-*x0)*(*x1-*x0))+((*y1-*y0)*(*y1-*y0));
    cout << "o Raio da circuferencia é: " << *r << endl;
}

void equation(float *x0, float *y0, float *x1, float *y1, float *r){
    cout << "a"<<*x1<< "²+ b"<< *y1 << "²+ c" << *x1 << "+ d"<< *y1 <<"+ e = 0"<<endl;
}

void (*ptr1[])(float *x0, float *y0, float *x1, float *y1, float *r) = {Ray, equation};

int main(){
    Coordinates coo;
    Coordinates *ptrcoo =&coo;
    int opcao;

    cout << "Digite a cordernada do centro do circulo: " << endl;
    cout << "x0: ";
    cin >> *ptrcoo->x0;
    cout << "y0: ";
    cin >> *ptrcoo->y0;
    cout << "x1: ";
    cin >> *ptrcoo->x1;
    cout << "y1: ";
    cin >> *ptrcoo->y1;
    cout <<"Oque deseja fazer: "<< endl;
    cout << "1-Raio\t|\t2-Equação"<<endl;
    cin >> opcao;
    (ptr1[opcao-1])(ptrcoo->x0, ptrcoo->y0, ptrcoo->x1, ptrcoo->y1,ptrcoo->r);
}
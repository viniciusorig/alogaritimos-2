#include <iostream>
#include <cmath>
using namespace std;


struct Coordinates{
    double x3,y3,x4,y4, ray;
    double *x0 = &x3, *y0 = &y3, *x1 = &x4, *y1 = &y4, *r=&ray;

};
 
void Ray(double *x0, double *y0, double *x1, double *y1, double *r){
    *r = ((*x1-*x0)*(*x1-*x0))+((*y1-*y0)*(*y1-*y0));
    cout << "o Raio da circuferencia é: " << *r << endl;
}

void equation(double *x0, double *y0, double *x1, double *y1, double *r){
    *r = ((*x1-*x0)*(*x1-*x0))+((*y1-*y0)*(*y1-*y0));
    cout << "a "<<pow(*x1, 2) << " + b "<< pow(*y1, 2) << " + c " << *x1 << " + d "<< *y1 <<" + " << *r <<" = 0"<<endl;
}

void (*ptr1[])(double *x0, double *y0, double *x1, double *y1, double *r) = {Ray, equation};

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
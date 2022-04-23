#include <iostream>
#include <cmath>
using namespace std;

struct Coordinates{
    float x3,y3,x4,y4, ray;
    float *x0 = &x3, *y0 = &y3, *x1 = &x4, *y1 = &y4, *r=&ray;

};
 
void Ray(float *x0, float *y0, float *x1, float *y1, float *r){
    *r = ((*x1-*x0)*(*x1-*x0))+((*y1-*y0)*(*y1-*y0));
    cout << "o Raio da circuferencia é: " << *r << endl;
}

void equation(float *x0, float *y0, float *x1, float *y1, float *r){
    *r = ((*x1-*x0)*(*x1-*x0))+((*y1-*y0)*(*y1-*y0));
    cout << "a "<<pow(*x1, 2) << " + b "<< pow(*y1, 2) << " + c " << *x1 << " + d "<< *y1 <<" + " << *r <<" = 0"<<endl;
}

int main(){
    Coordinates coo;
    Coordinates *ptrcoo =&coo;
    cout << "Digite a cordernada do centro do circulo: " << endl;
    cout << "x0: ";
    cin >> *ptrcoo->x0;
    cout << "y0: ";
    cin >> *ptrcoo->y0;
    cout << "x1: ";
    cin >> *ptrcoo->x1;
    cout << "y1: ";
    cin >> *ptrcoo->y1;

    Ray((ptrcoo)->x0, (ptrcoo)->y0, (ptrcoo)->x1, (ptrcoo)->y1, (ptrcoo)->r);
    equation((ptrcoo)->x0, (ptrcoo)->y0, (ptrcoo)->x1, (ptrcoo)->y1, (ptrcoo)->r);
}
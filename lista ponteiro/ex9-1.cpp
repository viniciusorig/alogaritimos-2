#include <iostream>
using namespace std;


void swp1 (int *x, int *y, int temp=0){
    temp = *x;
    *x=*y;
    *y = temp;
    cout << "apos o swp ficou" << endl << "x=" << *x << "\ty=" << *y << endl; 
}

int main(){
    int X, Y, *x = &X, *y = &Y;
    cout << "Digite os valores para"<< endl << "X="; 
    cin >> *x;
    cout << "Y="; 
    cin >> *y;
    swp1(x, y);
}
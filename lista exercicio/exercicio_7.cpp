#include <iostream>
#include <cmath>

using namespace std;

struct COORDENADA{
    float x, y;
    float r, a;
};
void trans();

int main(){
    COORDENADA coo;
    cout<<"digite as coordenadas polares: "<<endl;
    cout<<"digite o raio: ";
    cin >> coo.r;
    cout<<"digite o theta: ";
    cin >> coo.a;
    void trans();
    cout<< "a coodenada cartesiana eh: ("<<coo.x<<", "<<coo.y<<")"<<endl;  
}
void trans() {
    COORDENADA coo;
    coo.x = coo.r*cos(coo.a);
    coo.y = coo.r*sin(coo.a);
}
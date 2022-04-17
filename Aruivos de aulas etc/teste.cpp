#include <iostream>
#include <complex>
using namespace std;

struct r{
    int a,c;
};

struct i{
    int b,d;
};
void soma(r n1,i n2);
int main(){
    i ni;
    r nr;
    cout<<"Digite o 1 numero real: ";
    cin>>nr.a;
    cout<<"Digite o 1 numero imaginario: ";
    cin>>ni.b;
    cout<<"Digite o 2 numero real: ";
    cin>>nr.c;
    cout<<"Digite o 2 numero imaginario: ";
    cin>>ni.d;
    soma(nr,ni);
    return 0;
}
void soma(r n1,i n2){
    cout<<"Soma: "<<n1.a+n1.c<<"+"<<n2.b+n2.d<<"i"<<endl;
}
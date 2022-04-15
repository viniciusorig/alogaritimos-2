#include <iostream>
using namespace std;

struct Z{
    int real;
    int imag;
};

struct W{
    int real;
    int imag;
};

void operacao_soma(Z z, W w);
void operacap_sub(Z z, W w);
void operacap_mult(Z z, W w);
int main(){
    Z z;
    W w;
    cout<<"digite a parte real de 'Z':"<<endl;
    cin>>z.real;
    cout<<"digite a parte imaginaria de 'Z':"<<endl;
    cin>>z.imag;   
    cout<<"digite a parte real de 'W':"<<endl;
    cin>>w.real;
    cout<<"digite a parte imaginaria de 'W':"<<endl;
    cin>>w.imag;
    cout<<"--------------------------------"<<endl;
    cout << "agurde(aperte enter quando necessario)"<<endl;
    cout<<"--------------------------------"<<endl;
    system("pause");
    operacao_soma(z, w);
    cout<<"--------------------------------"<<endl;
    operacap_sub(z, w);
    cout<<"--------------------------------"<<endl;
    operacap_mult(z, w);
    system("pause");

}
void operacao_soma(Z z, W w){
    int aux_real;
    int aux_imag;
    aux_real=z.real+w.real;
    aux_imag=z.imag+w.imag;
    if(aux_imag>0){
        cout<<aux_real<<"+"<<aux_imag<<"i"<<endl;
    }else{
        cout<<aux_real<<aux_imag<<"i"<<endl;

    }}
void operacap_sub(Z z, W w){
    int aux_real;
    int aux_imag;
    aux_real=z.real-w.real;
    aux_imag=z.imag-w.imag;
    if(aux_imag>0){
        cout<<aux_real<<"+"<<aux_imag<<"i"<<endl;
    }else{
         cout<<aux_real<<aux_imag<<"i"<<endl;

    }
    }
void operacap_mult(Z z, W w){
    int aux_real;
    int aux_imag;
    aux_real = (z.real*w.real)-(z.imag*w.imag);
    aux_imag = (z.real*w.imag)+(w.real*z.imag);
    if(aux_imag>0){
       cout<<aux_real<<"+"<<aux_imag<<"i"<<endl;
    }else{
         cout<<aux_real<<aux_imag<<"i"<<endl;

    }
}
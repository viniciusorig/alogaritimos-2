#include<iostream>
using namespace std;

int lacamento(int b){
    if(b >= 1){
        cout << b << ", ";
        return lacamento(b-1);
    }else{
        cout << "lancamento.";
    }
}

int main(){
    cout << lacamento(1000000) << endl;
}
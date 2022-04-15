#include<iostream>
using namespace std;

int fibo(int x, int y, int z);// prototipando função antes de começar



int main(){
    int termos=50, n1, n2;// estou indicando as variaveis inteiras 
    cout << "oh mestre do universo quantos temos quer de mim"<< endl;
    //cin>> termos;// aqui vai absorver o numero para a variavel termos
    n1=1; // aqui ja indiquei os valores inicias de n1
    n2=1;// e aqui de n2
    termos=termos-2; // aqui indiquei que o novos termos é o valor inical menos 2 pois a serie de fibonacci começa com 1 1
    cout<<n1<<" "<<n2<<" ";  // aqui printei n1 e n2 com espaço entre eles;
    fibo(termos, n1,n2); //~
    cout<<endl;
    system("pause");
}
int fibo(int x, int y, int z){
    int aux; //
    if (x == 0)
    {
        
        return 1; //
    }
    aux=z+y;
    y=z;
    z=aux;
    cout<<aux<<" ";
    return fibo(x-1,y,z);
    
}
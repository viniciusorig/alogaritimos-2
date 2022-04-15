#include<iostream>
using namespace std;

int fibo(int x, int y, int z);// prototipando função antes de começar

int main(){
    int termos, n1, n2;// estou indicando as variaveis inteiras 
    cout << "oh mestre do universo quantos temos quer de mim"<< endl;
    cin>> termos;// aqui vai absorver o numero para a variavel termos
    cout<<"digite o termo 01"<< endl;
    cin>> n1; // aqui ja indiquei os valores inicias de n1
    cout<<"digite o termo 02"<< endl;
    cin>> n2;
    fibo(termos, n1,n2); //~]]
    cout<<endl;
    system("pause");
}
int fibo(int x, int y, int z){
    int aux; //
    if (x == 0)
    {
        
        return 1; //
    }else{
        if (x%2==0)
        {
            aux=z-y;
            y=z;
            z=aux;
            cout<<aux<<" ";
            return fibo(x-1,y,z);
        }
        else{
           aux=z+y;
            y=z;
            z=aux;
            cout<<aux<<" ";
            return fibo(x-1,y,z);
        }
        
   } 
}
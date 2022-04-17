#include<iostream>
using namespace std;

struct PESSOAL{
    string name,bairro, numb, cidade, sigla, cep;
   
   
};
int main(){
    int tam=0, i = 0;
    int opcao;
    PESSOAL ps[tam];
    cout<<"bem vindo"<<endl;
    cout<<"----------------------------------------"<<endl;
    do{
        cout<<"nome da rua: ";
        cin.ignore();
        getline(cin, ps[i].name);
        cout<<"numero: ";
        cin.ignore();
        getline(cin, ps[i].numb);
        cout<<"nome do bairro: ";
        cin.ignore();
        getline(cin, ps[i].bairro);
        cout<<"nome da cidade: ";
        cin.ignore();
        getline(cin, ps[i].cidade);
        cout<<"sigla do estado: ";
        cin.ignore();
        getline(cin, ps[i].sigla);
        cout<<"CEP(Somente numeros): ";
        getline(cin, ps[i].cep);   
        cin.ignore();
    
        }while(opcao!=0);
            cout<<"endereços cadastrados:"<<endl;
            cout<<"---------------------------------------------"<<endl;
            for(int i=0; i<tam; i++)
            cout<<ps[i].name<<", "<<ps[i].numb<<", "<<ps[i].cidade<<", "<<ps[i].sigla<<ps[i].cep;
}

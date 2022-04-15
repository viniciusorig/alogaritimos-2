#include <iostream>
using namespace std;

struct DATA{
    int dia= (rand()%39)+1;
    int mes= (rand()%11)+1; 
    int ano= (rand()%72)+1950;
};
struct PESSOAL{
    DATA dt;
    string name;
    int h;
}; 

int main(){
    PESSOAL ps[7];
    system("cls");
    cout<<" bem vindo ao nosso sistema <3"<<endl;
    cout<<"--------------------------------------------------"<<endl;
    for(int i=0; i<7; i++){
        cout<<"nome da pessoa: ";
        cin.ignore();
        getline(cin, ps[i].name);
        cout<<"digite a altura da pessoa(em cm): ";
        cin>>ps[i].h;
        cout<<"------------------------------------------------"<<endl;

    }
    cout<<"aguarde um momento estamos prcessando(aguarde a confimacao na tela)."<<endl;
    system("pause");
    cout<<"------------------------------------------------------"<<endl;
    for (int i = 0; i < 7; i++)
    {
        cout<<"nome: "<<ps[i].name<<endl;
        cout<<"idade: "<<ps[i].dt.dia<<"/"<<ps[i].dt.mes<<"/"<<ps[i].dt.ano<<endl;
        cout<<"altura: "<<ps[i].h<<endl;
        cout<<"------------------------------------------------------"<<endl;

    }
    cout<<"obrigado por utilizar nossos sistemas <3"<<endl;
    system("pause");
    return 0;
}
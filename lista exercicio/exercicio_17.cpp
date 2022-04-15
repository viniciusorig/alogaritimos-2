#include <iostream>
using namespace std;

struct ELETRO{
    string name;
    float pot;
    float t;
    float aux;
};

int main(){
    ELETRO ener[5];
    int opcao;
    system("cls");
    cout<<"Ola bem vindo a nossa belissima calculadora de KWh"<<endl;
    cout<<"------------------------------------------------------------------------"<<endl;
    for(int i=0; i<5; i++){
        cout << "Digite o seu eletrodomestico";
        cin>>ener[i].name;
        cout<<"Digite a potencia em KW:";
        cin>>ener[i].pot;
        cout<<"Digite o tempo de uso em horas totais de uso: ";
        cin>>ener[i].t;
    }
    cout<<"------------------------------------------------------------------------"<<endl;
    cout<<"oque deseja fazer"<<endl;
    cout<<"1- deseja ver por aparelho"<<"\t2-deseja ver o consumo total"<<endl;
    cin>>opcao;
    switch(opcao){
        case1:{
            for(int i=0;i<5; i++){
                cout<<"------------------------------------------------------------------------"<<endl;
                ener[i].aux=ener[i].pot*ener[i].t;
                cout<<" o consumo total do eletrodomestico "<<ener[i].name<<" eh: "<<ener[i].aux<<endl;
                break;
            }
        }
        case 2:{ 
            cout<<"------------------------------------------------------------------------"<<endl;
            ener[0].aux=(ener[0].pot+ener[1].pot+ener[2].pot+ener[3].pot+ener[4].pot)*(ener[0].t+ener[1].t+ener[2].t+ener[3].t+ener[4].t);
            cout<<" o consumo total de todos os eletrodomestico eh: "<<ener[0].aux<<endl;
            break;
        }
    }
    system("pause");
}
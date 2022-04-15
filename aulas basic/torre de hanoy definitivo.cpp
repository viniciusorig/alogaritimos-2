#include<iostream>
using namespace std;

void movimento(int disco, char incio, char destino, char auxi); // prototipando a função antes de começar

int main(){
    int discos=3;// DEI QUANTOS DISCOS VAI TER PARA MOVIMENTAR
    movimento(discos, 'A', 'B', 'C');// CHAMEI NOVAMENTE A FUNÇÃO MOVIMENTO
    system("pause");
    return 0;
}
void movimento(int disco, char incio, char destino, char auxi){
    if (disco==1) // SE QUANTIDADE DE DISCO FOR IGUAL A 1 ELE DEVERA FAZER 
    {
        
        cout<<"Mover disco "<<disco<<" de "<<incio<<" para "<<destino<<endl; // mandar 
    }else{
        movimento(disco-1,incio,auxi,destino);
        cout<<"Mover disco "<<destino<<" de "<<incio<<" para "<<destino<<endl;
        movimento(disco-1,auxi,destino,incio);
    }
    }

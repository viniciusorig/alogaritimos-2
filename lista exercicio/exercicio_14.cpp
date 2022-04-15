#include <iostream>
using namespace std;
struct CARRO
{
    char marca[15];
    int ano;
    float preco;
};
int main(){
    CARRO cr[5];
    float p;
    system("cls");
    cout << "\tEntre com os dados dos veiculos: Marca, Ano, Preco de cada vez"<<endl;
    cout << "--------------------------------------------------------------------"<<endl;
    for(int i=0; i<5; i++){
    cout << "CARRO "<<i<<endl;
    cout << "Marca: ";
    cin >> cr[i].marca;
    cout << "Ano: ";
    cin >> cr[i].ano;
    cout << "Preco do carro: R$ "<<i<<": ";
    cin >> cr[i].preco; 
    }
    cout << "--------------------------------------------------------------------"<<endl;
    cout<<"Qual o valor que voce deseja pagar por seu veiculo? R$";
    cin >>p;
    cout<<"--------------------------------------------------------------------"<<endl;
    cout<<"Os automoveis disponiveis para este valor sao:"<<endl;
    for(int i=0;i<6;i++){
        if(cr[i].preco<=p){
            cout<<cr[i].marca<<" do ano de "<<cr[i].ano<< " com o valor de "<<cr[i].preco<<endl;
        
    }
}
    system("pause");
}

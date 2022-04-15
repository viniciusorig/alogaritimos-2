#include <iostream>
using namespace std;
struct DATA
{
    int dia, mes, ano;
};

struct CARGO {
    int cod_cargo;
    float salario;
    string cargo;
};

struct FUNCIONARIO{
    DATA dt;
    CARGO cg;
    string name, genero, cpf;
};

int main(){
    FUNCIONARIO fn;
    
    cout << " Ola bem vindo"<< endl;
    cout << "--------------------------------"<< endl;
    cout<<"Digite o nome do funcionario: ";
    getline(cin, fn.name);
    cin.ignore();
    cout << "--------------------------------"<< endl;
    cout<< "Genero(M/F)"<< endl;
    getline(cin, fn.genero);
    cin.ignore();
    cout << "--------------------------------"<< endl;
    cout<<"CPF(SOMENTE NUMEROS): ";
    getline(cin, fn.cpf);
    cin.ignore();
    cout<<"--------------------------------"<<endl;
    cout<< " Data de nascimento (apertando enter em cada seção): ";
    cin>>fn.dt.dia>>fn.dt.mes>>fn.dt.ano;
    cout<<"--------------------------------"<<endl;
    cout<< "Digite o codigo do cargo: ";
    cin>>fn.cg.cod_cargo;
    cout<<"--------------------------------"<<endl;
    cout<< "Digite o cargo: ";
    cin>>fn.cg.cargo;
    cout<<"--------------------------------"<<endl;
    cout<< "Digite o salario(com virgula): ";
    cin>>fn.cg.salario;
    cout<<"--------------------------------"<<endl;
    cout<< "Aguarde um momento!"<<endl;
    cout<<"(aperte o enter quando for necessario)"<< endl;
    system("pause");
    cout<<"\tInformacoes pessoais"<< endl;
    cout<<"--------------------------------"<<endl;
    cout<<"NOME: "<<fn.name<<endl<<"GENERO: "<<fn.genero<<endl<<"CPF: ";
    cout<<fn.cpf<<endl<<"Data de nascimento: "<<fn.dt.dia<<"/"<<fn.dt.mes<<"/"<<fn.dt.ano<<endl;
    cout<<"\tInformacoes sobre o Cargo"<< endl;
    cout<<"--------------------------------"<<endl;
    cout<<"Seu cargo eh: "<<fn.cg.cargo<<endl<<"Codigo do Cargo eh: "<<fn.cg.cod_cargo<<endl;
    cout<<"Salario: R$ "<<fn.cg.salario<<endl;
    system("pause");
    cout<<"Obrigado por utilizar nossos sistemas <3"<<endl;
    cout<<"aperte enter para sair"<<endl;
    system("pause");
}
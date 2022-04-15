#include <iostream>

using namespace std;


struct DATA{
    int dia, mes, ano;
};

struct VALIDACAO{
    string cpf, cep;
    char email[];
};

struct PESSOAL{
    DATA dt;
    VALIDACAO vl;
    string name;
    string cidade;
    string end;
};
void validaremail(PESSOAL ps);
int main(){
    PESSOAL ps;
    system("cls");
    cout << "DIGITE SEU NOME: ";
    getline(cin, ps.name);
    cin.ignore();
    cout<<"CPF: ";
    getline(cin, ps.vl.cpf);
    cin.ignore();
    cout<<"DATA DE NASCIMENTO(DIGITAR APERTANDO ENTER EM CADA SEGMENTO): ";
    cin>>ps.dt.dia>>ps.dt.mes>>ps.dt.ano;
    cout<<"DIGITE SEU EMAIL: ";
    cin>>ps.vl.email;
    for (int i = 0; ps.vl.email[i]!='\0'; i++)
        {
            if(ps.vl.email[i]=='@'){

                cout<< "EMAIL VALIDO. POR FAVOR CONTINUE."<<endl;
            }else{
                if (ps.vl.email[i]=='\0')
                {
                    cout<< "EMAIL INVALIDO. DIGITE NOVAMENTE: ";
                    cin>>ps.vl.email;
                }else{
                
                    i++;
                }
            }
        }
    cout<<"SEU 'CEP'(sem o traco): ";
    getline(cin, ps.vl.cep);
    cin.ignore();
    cout<<"SUA CIDADE: ";
    getline(cin, ps.cidade);
    cin.ignore();
    cout<<"DIGITE SEU ENDERECO: ";
    getline(cin, ps.end);
    cin.ignore();
    cout<<"----------------------------------------------------------------"<<endl;
    cout<<"\t--------------DADOS ARMAZENADOS--------------"<<endl;
    cout<<"NOME: "<<ps.name<<endl;
    cout<<"CPF: "<<ps.vl.cpf<<endl;
    cout<<"data de nascimento: "<<ps.dt.dia<<"/"<<ps.dt.mes<<"/"<<ps.dt.ano<<endl;
    cout<<"EMAIL: "<<ps.vl.email<<endl;
    cout<<"ENDERECO: "<<ps.vl.cep<<", "<<ps.cidade<<", "<<ps.end;
    system("pause");

}
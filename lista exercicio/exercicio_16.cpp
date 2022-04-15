#include <iostream>
using namespace std;

struct DATA{
    int dia, mes,ano;
};
struct COMPROMISSO{
    DATA dt;
    char txt[60];
};

int main(){
    COMPROMISSO cp[5];
    int m, a;
    system("cls");
    for (int i = 0; i < 5; i++)
    {    
        cout << "Digite o seu compromisso(max 60 caracteres): "<<endl;
        cin>>cp[i].txt;
        cout<<"digite a data do compromisso(sem as barras dando enter em cada segmento)"<<endl;
        cin>>cp[i].dt.dia>>cp[i].dt.mes>>cp[i].dt.ano;
    }
    cout<<"-------------------------------------------------------------------------------------"<<endl;
    cout<<"qual o mes que voce deseja ver: ";
    cin>>m;
    cout<<"de qual ano? ";
    cin>>a;
    for (int i = 0; i < 5; i++)
    {    
        if (a=cp[i].dt.ano, m=cp[i].dt.mes)
        {
            cout<<"-----------------------------------------------------"<<endl;
            cout<<"o(s) compromisso(s) encontrados eh(são):"<<endl;
            cout<<cp[i].txt<<endl;
            cout<<"com a data de: "<<cp[i].dt.dia<<"/"<<cp[i].dt.mes<<"/"<<cp[i].dt.ano<<endl;
        }
    }
    cout<<"obrigado por escolher o nosso sistema"<<endl;
    system("pause");
}    
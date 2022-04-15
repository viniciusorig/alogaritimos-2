#include <iostream>
using namespace std;

struct Nome{ //declarei a estrutura data com tres variaveis dia , mes , ano

        string name;

};
struct Idade { //declarei a estrutura com tres variaveis hora, minutos, segundos
        
        string year; 
        
};

    struct Endereco{
        string end;
        
    };
int main(){
    Endereco end;
    Nome rg;
    Idade id;
    
    cout<<"Digite o seu nome:"<<endl;// imprime a pergunta
    cin.ignore();
    getline(cin,rg.name);// armezena os dados  em s
    cout<<"Idade"<<endl;//
    cin>> id.year;//
    cout<<"endereco:"<<endl;//
    cin>> end.end;

    system("pause");    
    cout<<endl;
    
    cout<< "Dados armazenados"<< endl;//
    cout<< rg.name<< " com "<< id.year<<" anos"<< endl;
    cout<< "e situado em: "<<end.end<< endl;
    cout<< "obrigado e tenha um otimo dia!"<<endl;// imprime uma despedida
    

    return 0;
}
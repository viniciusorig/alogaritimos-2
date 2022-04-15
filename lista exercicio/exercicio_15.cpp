#include <iostream>
using namespace std;

struct LIVRO
{
    char title[30], autor[15];
    int ano;
};

int main(){
    LIVRO lr[5];
    int opcao;
    system("cls");
    cout <<"ola bem vindo"<<endl;
    cout <<"-------------------------"<<endl;
    cout<<"digite os dados dos livros"<<endl;
    for (int i = 0; i < 6; i++)
    {
        cout<<"Nome do livro: ";
        cin>>lr[i].title;
        cout<<"digite o autor: ";
        cin>>lr[i].autor;
        cout<<"ano de lançamento: ";
        cin>>lr[i].ano;
    }
    cout<<"---------------------------------"<<endl;
    cout<<"qual o livro que voce deseja escolher?"<<endl;
    for (int i = 0; i < 6; i++)
    {
        cout<<i<<"-"<<lr[i].title<<endl;
    }
    
    cin>>opcao;
    if(opcao<=5){
        switch(opcao){
            case 1:{
                cout<<"TITULO"<<lr[1].title<<endl;
                cout<<"AUTOR: "<<lr[1].autor<<endl;
                cout<<"ANO DE LANCAMENTO: "<<lr[1].ano<<endl;
                break;
            }
            case 2:{
                cout<<"TITULO"<<lr[2].title<<endl;
                cout<<"AUTOR: "<<lr[2].autor<<endl;
                cout<<"ANO DE LANCAMENTO: "<<lr[2].ano<<endl;
                break;
            }
            case 3:{
                cout<<"TITULO"<<lr[3].title<<endl;
                cout<<"AUTOR: "<<lr[3].autor<<endl;
                cout<<"ANO DE LANCAMENTO: "<<lr[3].ano<<endl;
                break;
            }
            case 4:{
                cout<<"TITULO"<<lr[4].title<<endl;
                cout<<"AUTOR: "<<lr[4].autor<<endl;
                cout<<"ANO DE LANCAMENTO: "<<lr[4].ano<<endl;
                break;
            }
            case 5:{
                cout<<"TITULO"<<lr[5].title<<endl;
                cout<<"AUTOR: "<<lr[5].autor<<endl;
                cout<<"ANO DE LANCAMENTO: "<<lr[5].ano<<endl;
                break;
            }
        }
    }else{

    }
    
}
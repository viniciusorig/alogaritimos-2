#include <iostream>
#include <string>
using namespace std;

struct Aluno{ //declarei a estrutura data com tres variaveis dia , mes , ano
    string name[5];
    int mat[5];
    string curso[5];
    
    };

int main(){
    Aluno aluno; 

    for(int i=0; i<5; i++){
        cout<<"Digite o nome do aluno "<< i<<":"<<endl;// imprime a pergunta
        cin.ignore();
        getline(cin, aluno.name[i]);
        cout<<"Matricula:"<<endl;//
        cin>>aluno.mat[i]; 
        cout<<"Curso:"<<endl;//
        cin.ignore();
        getline(cin, aluno.curso[i]);  
        cout<<endl;//
        system("pause");    
        cout<<endl;
    
    }
    
    
    cout<< "Dados armazenados"<< endl;//
    for (int i = 0; i < 5; i++)
    {
    
    
    cout<< "---------Aluno "<< i <<": ---------"<< aluno.name[i]<< endl;
    cout<< "---------Matricula: "<<aluno.mat[i]<<"---------" << endl;
    cout<< "---------Curso: "<<aluno.curso[i]<<"---------"<<endl;//
    cout<<endl;
    
    
}
    cout<< "---------obrigado e tenha um otimo dia!---------"<<endl;// imprime uma despedida
    return 0;
}
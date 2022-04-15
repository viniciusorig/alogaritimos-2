#include <iostream>
using namespace std;  
#include <iostream>
#include <string>
#include <vector>
using namespace std;


struct Nota{
    float nota1, nota2, media;
};

struct Aluno{ 
    Nota nt;
    string name,matricula, cod_diciplina;
};
int main(){
    Aluno aluno[10];
    float aux;
    cout << "-------------------Ola bem vindo!--------------------------"<< endl;
    cout << "------------Digite os dados dos alunos---------------------"<< endl;
        for(int i=0; i<10; i++){
            cout << "Nome do aluno "<<i<<":"<<endl;
            getline(cin, aluno[i].name);
            cin.ignore();
            cout<<"matricula"<<endl;
            cin>>aluno[i].matricula;
            cout<< "Qual o codigo da Diciplina?"<< endl;
            cin>>aluno[i].cod_diciplina;
            cout<<"Digite a nota da prova 1"<<endl;
            cin>>aluno[i].nt.nota1;
            cout<<"Digite a nota da prova 2"<<endl;
            cin>>aluno[i].nt.nota2;
            fflush(stdin);
            cout<<"-------------------------------"<<endl;
        }
        for (int i = 0; i < 10; i++)
        {
            aux=((aluno[i].nt.nota1*1)+(aluno[i].nt.nota2*2)/3);
            cout<<aluno[i].name<<" a media do aluno eh: "<<aux<<endl;
            cout<<"----------------------------"<<endl;
        }        

    system("pause");
    cout<<"Obrigado por utilizar nossos sistemas <3" << endl;
    system("pause");
    return 0;
}
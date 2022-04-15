#include <iostream>
#include <string>
#include <vector>
using namespace std;


struct Nota{
    float nota1, nota2, nota3, media;
};

struct Aluno{ 
    Nota nt;
    string name,matricula;
};
void maiornota1(Aluno aluno[]);
void maiormedia(Aluno aluno[]);
void menormedia(Aluno aluno[]);
int main(){
    Aluno aluno[4];
    int opcao;
    float aux;
    cout << "-------------------Ola bem vindo!--------------------------"<< endl;
    cout << "------------Digite os dados dos alunos---------------------"<< endl;
        for(int i=0; i<4; i++){
            cout << "Nome do aluno "<<i<<":"<<endl;
            getline(cin, aluno[i].name);
            cin.ignore();
            cout<<"matricula"<<endl;
            cin>>aluno[i].matricula;
            cout<<"Digite a nota da prova 1"<<endl;
            cin>>aluno[i].nt.nota1;
            cout<<"Digite a nota da prova 2"<<endl;
            cin>>aluno[i].nt.nota2;
            cout<<"Digite a nota da prova 3"<<endl;
            cin>>aluno[i].nt.nota3;
            fflush(stdin);
        }
        cout<<"oque deseja fazer:"<<endl;
        cout<<"1- maior nota da prova 1"<<endl<<"2- Aluno com a maior media geral"<<"3-aluno com a menor media"<<endl<<"4- aprovados"<<endl;
        cout << "opção: ";
    
        cin>>opcao;
        switch(opcao){
            case 1: {
                void maiornota1(Aluno aluno[]);
            break;
            }
            case 2: {
                void menormedia(Aluno aluno[]);
            break;   
            } 
            case 3: {
                void menormedia(Aluno aluno[]);
                break;
                }
            break;
            case 4: {
                for (int i = 0; i <4; i++)
                {
                    cout<<aluno[i].name[i]<<" : ";
                    aluno[i].nt.media = aluno[i].nt.nota1+aluno[i].nt.nota2+aluno[i].nt.nota3;
                    cout<<"media: "<<aluno[i].nt.media<<endl;
                    cout<<"o aluno "<<i<<" esta ";
                    if (aluno[i].nt.media/3>=7)
                    {
                        cout<<"aprovado"<<endl;
                    }else{
                        cout<<"reprovado"<<endl;
                    }
            }
            break;
        }
    }

    system("pause");
    cout<<"Obrigado por utilizar nossos sistemas <3" << endl;
    system("pause");
    return 0;
}
void maiornota1(Aluno aluno[]){
    float maior= 0;
    for(int i=0; i<4; i++){
        if (aluno[i].nt.nota1>maior)
        {
            maior=aluno[i].nt.nota1;

        }
        
    }
    for (size_t i = 0; i < 4; i++)
    {
        cout<<"a maior nota na prova 1 eh: "<<maior<<endl;
    }
    
}
void maiormedia(Aluno aluno[]){
    float maior= 7;
    for(int i=0; i<4; i++){
        if ((aluno[i].nt.nota1+aluno[i].nt.nota2+aluno[i].nt.nota3)/3>=maior)
        {
            maior=aluno[i].nt.nota1;

        }
        
    }
    for (size_t i = 0; i < 4; i++)
    {
        cout<<"a maior media na prova 1 eh: "<<maior<<endl;
    }
}
void menormedia(Aluno aluno[]){
    float media= 7;
    for(int i=0; i<4; i++){
        if ((aluno[i].nt.nota1+aluno[i].nt.nota2+aluno[i].nt.nota3)/3<=media)
        {
            media=aluno[i].nt.nota1;

        }
        
    }
    for (size_t i = 0; i < 4; i++)
    {
        cout<<"a menor media na prova 1 eh: "<<media<<endl;
    }
}
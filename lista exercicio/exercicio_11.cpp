#include <iostream>
using namespace std;

struct MEDIAF{
    float media;
    float nota1;
    float nota2;
 
};
struct APROVED{
    string name;
    int mat;
    float mdf;
};
struct REPROVED{
    string name;
    int mat;
    float mdf;
};


struct ALUNO{
    MEDIAF md;
    string name;
    
    int mat;
};

int main(){
    ALUNO aluno[10];
    APROVED aprovado[10];
    REPROVED reprovado[10];
    int conta = 0;
    int contr =0;

    for(int i=0;i<10; i++){
        cout<<"digite o nome do aluno "<<i<<endl;
        cin >> aluno[i].name;
        cout<<"digite a matricula do aluno "<<i<<endl;
        cin >> aluno[i].mat;
        cout<<"digite a nota 1 do aluno "<<i<<endl;
        cin >> aluno[i].md.nota1;
        cout<<"digite a nota 2 do aluno "<<i<<endl;
        cin >> aluno[i].md.nota2;
    }
    for(int i=0;i<10;i++){
        aluno[i].md.media=(aluno[i].md.nota1+aluno[i].md.nota2)/2;
        if (aluno[i].md.media >= 5)
        {
            swap(aprovado[conta].name, aluno[i].name);
            aprovado[conta].mdf= aluno[i].md.media;
            aprovado[conta].mat=aluno[i].mat;
            conta++;
        }else{
            swap(aprovado[conta].name, aluno[i].name);
            aprovado[conta].mdf = aluno[i].md.media;
            aprovado[conta].mat=aluno[i].mat;
            conta++;

        }
        
    }
    cout<<"APROVADOS"<<endl;
    cout<<"========================"<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout << aprovado[i].name<<" "<<aprovado[i].mat<<" "<<aprovado[i].mdf<<endl;
    }
    cout<<"REPROVADO"<<endl;
    cout<<"================================"<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout << reprovado[i].name<<" "<<reprovado[i].mat<<" "<<reprovado[i].mdf<<endl;
    }
    
}
#include <iostream>
#include <string.h>
using namespace std;

struct ENDERECO{
    string logradouro, name;
    int numero;
};

struct PESSOAL{
    ENDERECO end;
    string tel;
    char name[100];
};
int main(){
    PESSOAL ps[5];
    for(int i=0; i<5; i++){
        cout<<"digite o nome da pessoa "<<i<<endl;
        cin>>ps[i].name;
        cout<<"digite o endereço da pessoa completa com logradouro apertando enter: "<<i<<endl;
        cin>>ps[i].end.logradouro>>ps[i].end.name>>ps[i].end.numero;
        cout<<"digite o telefone da pessoa "<<i<< endl;
        cin>>ps[i].tel;
    }
    for(int i=0; i<5; i++){
        
            for (int j = i; j <5; j++)
            {
                if(strcmp(ps[i].name, ps[j].name)>0){
                    swap( ps[i].name, ps[j].name);
                }         
            }
     }
                         
}

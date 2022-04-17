#include <iostream>
using namespace std;

int compromisso[3];

struct Data{ //declarei a estrutura data com tres variaveis dia , mes , ano
        int dia, mes, ano;

        void init(int dia, int mes, int ano){
            dia = dia;
            mes = mes;
            ano = ano;

        }

    };
    struct Horario { //declarei a estrutura com tres variaveis hora, minutos, segundos
        int hora, min, seg;
        
        void init(int hora, int min, int seg){
            hora = hora;
            min = min;
            seg = seg;
        }
    };

    struct Compromisso{
        
        Data dt;
        Horario hora;
        
        compromisso.dt.dia=10; 
    };
int main(){
    int s;// declarei a variavel inteira onde ira verificar apos a pergunta ira verificar se é deseja verificar
    cout<<"voce deseja verificar seus compromissos para hoje?"<<endl;// imprime a pergunta
    cout<<"1/0"<<endl;// imprime as opçoes
    cin>>s;// armezena os dados  em s
    
    if (s==1){ //se for verdadeiro imprime os 3 compromissos
        

    
    }else{
        cout<< "obrigado e tenha um otimo dia!"<<endl;// imprime uma despedida
    }

    return 0;
}
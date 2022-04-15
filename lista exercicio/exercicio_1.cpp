#include <iostream>
using namespace std;

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
        string texto;
        Data dt;
        Horario hr;
        
    };
int main(){
    Compromisso cp;
    
    cout<<"Digite os dados do seu compromisso"<<endl;// imprime a pergunta
    cout<<"data"<<endl;
    cin>> cp.dt.dia;// armezena os dados  em s
    cout<<"mes"<<endl;//
    cin>> cp.dt.mes;//
    cout<<"ano"<<endl;//
    cin>> cp.dt.ano;

    cout<<"horario"<<endl;
    cin>> cp.hr.hora;// armezena os dados  em s
    cout<<"minutos"<<endl;//
    cin>> cp.hr.min;//
    cout<<"segundos"<<endl;//
    cin>> cp.hr.seg;

    cout<<"qual o motivo do compromisso"<<endl;//
    cin.ignore();    
    getline(cin, cp.texto);
    

    system("pause");    
    cout<<endl;
    
    cout<< "este eh o seu compromisso final"<< endl;//
    cout<< cp.dt.dia<< "/"<< cp.dt.mes<<"/"<<cp.dt.ano<< endl;
    cout<< cp.hr.hora<<":"<< cp.hr.min<<":"<<cp.hr.seg<<endl;
    cout<< cp.texto<<endl;
    cout<< "obrigado e tenha um otimo dia!"<<endl;// imprime uma despedida
    

    return 0;
}
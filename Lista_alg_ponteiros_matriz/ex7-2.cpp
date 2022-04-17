#include <iostream>
#include <ctime>
using namespace std;

void gera(int *v, int *N, int *maximo, int *minimo){

    for(int i = 0; i < *N; i++){
        v[i] = rand();
    }
        for(int i = 0; i < *N; i++){
            cout << v[i] << "\t";
        }
        cout << endl;
}

void maximoMinimo(int *v, int *N, int *maximo, int *minimo){
 
        *maximo = *v;
        *minimo = *v;

        for(int i = 1; i < *N; i++){
        if(*minimo > *(v + i))
            *minimo = *(v + i);
        if(*maximo < *(v + i))
            *maximo = *(v + i);
    }
    cout << "minimo = " << *minimo << endl;
    cout << "maximo = " << *maximo << endl;
}

void nada(int *v, int *N, int *maximo, int *minimo){
    gera(v,N,maximo, minimo);
    maximoMinimo(v,N,maximo, minimo);
}

void funcao_errada(int *v, int *N, int *maximo, int *minimo){
    cout << "Então vc é desses em kakakakakak" << endl;
}

void (*ptr[]) (int *v, int *N, int *minimo, int *maximo)={nada, funcao_errada};

int main(){
    srand(time(NULL));
    int casas = 0, vector[casas], menor, maior, opcao;
    int *N = &casas, *v = &vector[*N], *minimo = &menor, *maximo = &maior;

    cout << "digite quantas casas para o array: ";
    cin >> *N;
    cout << "oque deseja fazer: "<< endl;
    cout << "1-funcao certa\t|\t2-funcao errada"<< endl;
    cin >> opcao;
    
    (ptr[opcao-1])(v,N,maximo, minimo);
}
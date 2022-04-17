#include <iostream>
#include <ctime>
using namespace std;

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

int main(){
    srand(time(NULL));
    int casas= 2, vector[casas], menor, maior;
    int *N = &casas, *v = &vector[*N], *minimo = &menor, *maximo = &maior;

    cout << "digite quantas casas para o array: ";
    cin >> *N;
    for(int i = 0; i < *N; i++){
        v[i] = rand();
    }

    for(int i = 0; i < *N; i++){
        cout << v[i] << "\t";
    }
    cout << endl;
    
    maximoMinimo(v,N,maximo, minimo);
}
#include <iostream>
#include <ctime>
#include <vector>

using namespace std;

const int TAM=6;

void printVetor(int x[]);
void invert(int v[], int inicio, int fim);

int main(){
    //[1,2,3,4,5,6]
    //[6,5,4,3,2,1]
    int vetor[]= {0,1,2,3,4,5,6};
    printVetor(vetor);
    invert(vetor, 0, TAM-1);
    printVetor(vetor);

    system("pause"); 
    return 0;
}
void invert(int v[], int inicio, int fim){
    if (inicio<fim){
        int aux=v[inicio];
        v[inicio] = v[fim];
        v[fim] = aux;
        invert (v, inicio+1, fim-1);
    }
}
void printVetor(int v[]){
    for (int i=0; i<TAM; i++){
        cout<<v[i]<<" ";
    }
     cout<<endl;
}
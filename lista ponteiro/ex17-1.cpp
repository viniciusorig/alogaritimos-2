#include <iostream>
using namespace std;

void troca(int *vetor1, int *vetor2, int *vetor_aux, int *tam)
{
    for (int q = 0; q < *tam; q++)
    {
        vetor_aux[q] = vetor1[q];
        vetor1[q] = vetor2[q];
        vetor2[q] = vetor_aux[q]; 
    }
    *vetor2 -= *tam;
    *vetor1 -= *tam;
   for (int i = 1; i < *tam; i++){
        cout << vetor1[i] << "\t";
        cout << vetor2[i] << "\t" << endl; 
    }

}

int main()
{
    int vector[5] = {9,8,7,6,5}, vector2[5] = {1,2,3,4,5}, vectoraux[5], tamanho = 5;
    troca(vector, vector2, vectoraux, &tamanho);
}
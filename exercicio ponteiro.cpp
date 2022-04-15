/*
1- imprimir um vetor usando ponteiro

2- dentro de um vetor 7 posiçoes encontre o menor elemento e troque a posiçao pelo maior elemento*/
#include <iostream>

using namespace std;

int main(){

        int v[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
        int * pt;
        int i;
        
        pt = v;
        
            for(i = 0; i < 10; i++)
            {
                printf("V[%i] = %i, ", i, *pt++);
            }
}
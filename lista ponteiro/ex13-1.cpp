#include <iostream>
using namespace std;

void soma(int vetor[4], int *x = 0)
{
    int *p, *pp;
    p = vetor;
    pp = &vetor[4];
    do{
        *x += *p; 
        p++;
    }while(p != pp);
    cout << *x << endl;
}

int main()
{
    int vetor[] = {1, 2, 3, 4}, adicao = 0;
    soma(vetor, &adicao);
}
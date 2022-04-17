#include <iostream>
using namespace std;

void findFact(int, int *f); //corrigi a falta da da especificação do ponteiro

int main(){
    int fact;
    int num1;
    printf("\n Pointer : Find the factorial of a given number :\n");
    printf("------------------------------------------------------\n");
    printf(" Input a number : ");
    scanf("%d", &num1);
    findFact(num1, &fact);
    printf(" The Factorial of %d is : %d \n", num1, fact); // retirei um \n que não era necessario
}
void findFact(int n, int *f){
    int i;
    *f = 1;//coloquei o "*" antes pois se não faz referencia ao end. de memoria da variavel
    for (i = 1; i <= n; i++){
        *f = *f * i; // aqui tambem corrigi a falta do "*"
    }
}
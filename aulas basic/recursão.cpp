#include <iostream>
using namespace std;

int main ()
    {                                  //at= numero atual da sequencia
        int num, ant = 1, at = 1, pr; //ant = numero anterior da sequencia
                                        //pr = proximo numero da sequencia
            cout << "Digite o numero de termos Fibonacci: ";
            cin >> num;
         for (int i = 1; i <= num; i++)
        {
         if (i == 1) cout << "0 "; // se  o numero que ler for 1 imprime 0
            else
         if (i == 2 || i == 3) cout << "1 "; // aqui define que se ler 2 ou 3  vai imprimir 1
            else
        {   // aqui começa a bricadeira de verdade
            pr = ant + at;     //o proximo numero a ser definido sera o anterior + o atual 
            ant = at; 
            at = pr;
            cout << " " << pr;
        }
        }
        return 0;
        }
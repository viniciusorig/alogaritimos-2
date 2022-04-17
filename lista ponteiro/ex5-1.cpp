#include <iostream>
using namespace std;

void total(int *people, int *apple, int *sugar, int *butter, int *bread, int *milk){
    *apple = (675/4)*(*people);
    *sugar = (150/4)*(*people);
    *butter = (75/4)*(*people);
    *bread = (100/4)*(*people);
    *milk =  (150/4)*(*people);
    cout << "Para " << *people << " é necesssario: " << endl;
    cout << "de macã: " << *apple << "g" <<endl;
    cout << "de manteiga: " << *butter << "g" <<endl;
    cout << "de acucar: " << *sugar << "g" <<endl;
    cout << "de migalhas de pao: " << *bread << "g" <<endl;
    cout << "de leite: " << *milk << "ml" <<endl;
}
int main(){
    int people_s, apple_s , sugar_s, butter_s, bread_s, milk_s;
    int *people = &people_s, *apple = &apple_s, *sugar = &sugar_s, *butter = &butter_s, *bread = &bread_s, *milk = &milk_s; 
    int opcao;
    cout << "\tOla bem vindo a calculadora de ingredientes" << endl;
    cout << "\tDigite para quantas pessoas voce quer caucular os ingredientes: ";
    cin >> *people;
    total(people, apple, sugar, butter, bread, milk);
}
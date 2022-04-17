#include <iostream>
using namespace std;

void per_person(int *people, int *apple, int *sugar, int *butter, int *bread, int *milk){
    *apple = 675/4;
    *sugar = 150/4;
    *butter = 75/4;
    *bread = 100/4;
    *milk =  150/4;
    cout << "Para cada pessoa sera necessario" << endl;
    cout << "de macã: " << *apple << "g" <<endl;
    cout << "de manteiga: " << *butter << "g" <<endl;
    cout << "de acucar: " << *sugar << "g" <<endl;
    cout << "de migalhas de pao: " << *bread << "g" <<endl;
    cout << "de leite: " << *milk << "ml" <<endl;
}

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

void (*ptr[])(int *people, int *apple, int *sugar, int *butter, int *bread, int *milk) = {per_person, total};

int main(){
    int people_s, apple_s , sugar_s, butter_s, bread_s, milk_s;
    int *people = &people_s, *apple = &apple_s, *sugar = &sugar_s, *butter = &butter_s, *bread = &bread_s, *milk = &milk_s; 
    int opcao;
    cout << "\tOla bem vindo a calculadora de ingredientes" << endl;
    cout << "\tDigite para quantas pessoas voce quer caucular os ingredientes: ";
    cin >> *people;
    cout << "\tOque deseja fazer: "<<endl;
    cout << "1- ingredientes por pessoa\t|\t2-total de ingredientes"<<endl;
    cin >> opcao;
    (*ptr[opcao-1])(people, apple, sugar, butter, bread, milk);
}
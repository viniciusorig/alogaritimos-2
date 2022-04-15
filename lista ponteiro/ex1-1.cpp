#include <iostream>
using namespace std;

void collector(float vector[], int size){
    cout << "Soma de quantos numeros deseja fazer?"<< endl;
    cin >> size;
    for (int i = 0; i < size; i++){
    cout << "Digite o numero "<< i <<":";
    cin >> vector[i];

    }
    for (int i = 0; i < size; i++){
        cout << vector[i] << "\t";
    }
}

int main(){
    void collector();

}
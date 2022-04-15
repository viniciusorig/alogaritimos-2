#include <iostream>
#include <vector>
# include <ctime>

const int TAM= 4;

using namespace std;

int somavetor(vector<int> vetor, int soma=0, int count=0);

int main(){
    vector<int> vetor;
    srand(time(NULL));
    for(int i=0; i<TAM; i++){
        int aux = rand() %3;
        vetor.push_back(aux);

    }

    cout<< somavetor(vetor)<<endl;
    
    for(int x: vetor){
        cout<<x<<endl;
    }

    system("pause");
    return 0;
    
}
int somavetor(vector<int> vetor, int soma, int count){
    if(count<TAM ){
        return somavetor(vetor, soma +vetor[count], count+1);
    }
    return soma;
}
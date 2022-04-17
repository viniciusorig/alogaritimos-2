#include <iostream>
using namespace std;

void calculo(int *proximas) {
    for (int i = 0; i < 11; i++){
        proximas[i] = 1986+((i*76)+(i*19));
    }
}

int main(){
    int passagens[11], *proximas = passagens;
    calculo(proximas);
    cout<<"a 1 passagem foi em "<<proximas[0]<<endl;

    for(int i=1; i<11; i++){
        cout << "a passagem vai ser: " << proximas[i] <<endl;
    }

}
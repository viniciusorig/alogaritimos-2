#include <iostream>
using namespace std;

int main(){
    int vet[] = {0, 10, 20, 30, 40, 50, 60};
    int *p;
    p = vet-1;
    int *pp = &vet[6];

    do{
        p++;
        cout << *p << "\t" << endl;
    }while (p != pp);

}
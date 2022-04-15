#include <iostream>
using namespace std;

int main(){
    int a[5];
    int soma=0;
    for(int i=0; i<=3; i++){
        a[i] = 1;
        soma=a[i]+soma;
        cout<<a[i]<<endl;
    }
    cout<<endl;
    cout<<"resultado da soma"<<" "<<soma<<endl;
}
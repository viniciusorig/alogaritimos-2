#include <iostream>
using namespace std;

void tam(char *str){
    int count = 0;
    cout << "digite algo:";
    cin >> *str;
    gets(str);
    fflush(stdin);
    while(*(str++) != '\0') count++;
    cout<< count+1 <<endl;
}

int main(){
    char texto[100];
    tam(texto);
}    
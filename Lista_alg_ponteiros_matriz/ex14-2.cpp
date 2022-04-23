#include <iostream>
using namespace std;

void tam(char *str){
    int count = 0;
    cout << "digite algo:";
    cin >> *str;
    gets(str);
    fflush(stdin);
    while(*(str++) != '\0') count++;
    cout<< count <<endl;
}

void print (char *str){
    cout << "digite algo:";
    gets(str);
    fflush(stdin);
    for (;*str != '\0'; str++){
        cout<< *str;
    }
}
void (*ptr1[])(char *str) = {tam, print};

int main(){
    char texto[100];
    int opcao;
    cout << "oque deseja fazer: " <<endl;
    cout << "1-tamanho\t|\t2-printar" << endl;
    cin >> opcao;
    fflush(stdin);
    (*ptr1[opcao-1])(texto);

}    





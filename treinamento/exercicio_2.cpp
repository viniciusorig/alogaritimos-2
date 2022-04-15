#include <iostream>

using namespace std;

void print1X(){
    cout << " TABUADA 1 " << endl;
    for(int i=1; i<=10; i++){
        cout <<"1x" << i << "=" << (i*1) << endl;
    }
}

void print2X(){
    cout << " TABUADA 2 " << endl;
    for(int i=1; i<=10; i++){
        cout <<"2x" << i << "=" << (i*1) << endl;
    }    
}

void print3X(){
    cout << " TABUADA 3"<< endl;
    for(int i=1; i<=10; i++){
        cout <<"3x" << i << "=" << (i*1) << endl;
    }
}

void print4X(){
    cout << " TABUADA 4"<< endl;
    for(int i=1; i<=10; i++){
        cout <<"4x" << i << "=" << (i*1) << endl;
    }
}

void print5X(){
    cout << " TABUADA 5"<< endl;
    for(int i=1; i<=10; i++){
        cout <<"5x" << i << "=" << (i*1) << endl;
    }
}

void print6x(){
    cout << " TABUADA 6"<< endl;
    for(int i=1; i<=10; i++){
        cout <<"6x" << i << "=" << (i*1) << endl;
    }
}

void print7X(){
    cout << " TABUADA 7"<< endl;
    for(int i=1; i<=10; i++){
        cout <<"7x" << i << "=" << (i*1) << endl;
    }
}

void print8x(){
    cout << " TABUADA 8"<< endl;
    for(int i=1; i<=10; i++){
        cout <<"8x" << i << "=" << (i*1) << endl;
    }
}

void print9X(){
    cout << " TABUADA 9"<< endl;
    for(int i=1; i<=10; i++){
        cout <<"9x" << i << "=" << (i*1) << endl;
    }
}

int main() {
    int opcao;
    system("cls");
    cout << "\tola bem vindo" << endl;
    cout << "-----------------------------------" << endl;
    cout << "qual tabuada voce deseja imprimir: " << endl;
    cout << "Escolha entre 1 ao 9 para imprimir cada tabuada\t|\tescolha 10 para imprimir todas: ";
    cin >> opcao;
    
    switch (opcao){
        
        case 1:{
            print1X();
            break;
        }
        
        case 2 : {
            print2X();
            break;
        }
        
        case 3 : {
            print3X();
            break;
        }
        
        case 4 : {
            print4X();
            break;
        }
        
        case 5 : {
            print5X();
            break;
        }
        
        case 6 : {
            print6x();
            break;
        }
        
        case 7 : {
            print7X();
            break;
        }
        
        case 8 : {
            print8x();
            break;
        }
        
        case 9 : {
            print9X();
            break;
        }
        
        case 10 : {
            cout << "imprimir todas as tabuadas:" << endl;
            cout << "-----------------------------------------------" << endl;
            print1X();
            cout << "-----------------------------------------------" << endl;
            print2X();
            cout << "-----------------------------------------------" << endl;
            print3X();
            cout << "-----------------------------------------------" << endl;
            print4X();
            cout << "-----------------------------------------------" << endl;
            print5X();
            cout << "-----------------------------------------------" << endl;
            print6x();
            cout << "-----------------------------------------------" << endl;
            print7X();
            cout << "-----------------------------------------------" << endl;
            print8x();
            cout << "-----------------------------------------------" << endl;
            print9X();
            cout << "-----------------------------------------------" << endl;
            break;

        }
    }
    cout << "obrigado por utilizar nossos sistemas" << endl;
    system("pause");
}
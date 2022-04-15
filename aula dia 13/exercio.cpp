#include <iostream>
using namespace std;


int main(){
    int a = 2;
    int *p1 = &a;
    int **p2 = &p1;
    int ***p3 = &p2;
    int ****p4 = &p3;
    int *****p5 = &p4;
    int ******p6 = &p5;
    int *******p7 = &p6;
    int ********p8 = &p7;
    int *********p9 = &p8;
    
    cout << a <<"\t";
    cout << *p1*2 <<"\t";
    cout << **p2*3 <<"\t";
    cout << ***p3*4 <<"\t";
    cout << ****p4*5 <<"\t";
    cout << *****p5*6 <<"\t";
    cout << ******p6*7 <<"\t";
    cout << *******p7*8 <<"\t";
    cout << ********p8*9 <<"\t";

}
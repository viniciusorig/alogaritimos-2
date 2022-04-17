#include <iostream>
using namespace std;

void molecule (float *pa, float *pb, float *result) {
    *result = ((*pa)*(*pb))/(*pa+*pb);
    cout << *result << endl;
}
void print_result (float *pa, float *pb, float *result) {
    cout<< "massa de A: " << *pa << " Massa de B: " << *pb <<endl;
}
void (*ptr1[])(float *pa, float *pb, float *result)={molecule, print_result};

int main (){
    float pasta_a, pasta_b, result_s = 0;
    float *pa = &pasta_a, *pb = &pasta_b, *result = &result_s;
    int opcao;

    cout << "A massa reduzida de uma molecula diatomica é dada apartir dos dados de Massa de a e Massa de b"<< endl;
    cout << "digite a massa de a e Massa de b(em sequencia): ";
    cin>>*pa>>*pb;
    cout << "oque deseja fazer:"<< endl;
    cout <<"1- resultado final\t|\t2-declaração de massas"<<endl;
    cin >> opcao;
    (*ptr1[opcao-1])(pa, pb, result);
}

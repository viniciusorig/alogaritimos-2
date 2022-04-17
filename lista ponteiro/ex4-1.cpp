#include <iostream>
using namespace std;

float molecule (float *pa, float *pb, float *result) {
    *result = ((*pa)*(*pb))/(*pa+*pb);
    cout << *result << endl;
    return *result;
}

int main (){
    float pasta_a, pasta_b, result_s = 0;
    float *pa = &pasta_a, *pb = &pasta_b, *result = &result_s;
    
    cout << "A massa reduzida de uma molecula diatomica é dada apartir dos dados de Massa de a e Massa de b"<< endl;
    cout << "digite a massa de a e Massa de b";
    cin>>*pa>>*pb;
    molecule (pa, pb, result);
}
#include <iostream>
using namespace std;

float sum(float *num1, float *num2, float *num3, float *num4, float *num5, float *num6, float *num7, float *num8, float *num9, float *num10 ){
    return (*num1 + *num2 + *num3 + *num4 + *num5 + *num6 + *num7 + *num7 + *num8 + *num8 + *num9 + *num9 + *num10)-3;
}

int main(){
    float a, b, c, d, e, f, g, h, i, j;
    float *ex = &a, *ex1 = &b, *ex2 = &c, *ex3 = &d, *ex4 = &e, *ex5 = &f, *ex6 = &g, *ex7 = &h, *ex8 = &i, *ex9 = &j; 
    cout << "Digite 10 termos para soma: " << endl;
    cin >> *ex >> *ex1 >> *ex2 >> *ex3 >> *ex4 >> *ex5 >> *ex6 >> *ex7 >> *ex8 >> *ex9;
    cout << sum(ex, ex1, ex2, ex3, ex4, ex5, ex6, ex7, ex8, ex9);
    
}
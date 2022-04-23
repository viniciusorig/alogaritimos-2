#include <iostream>
#include <math.h>
using namespace std;

void  funcs(float *x, const float *e, const float *p, float *ra, float *rb, float *rc, float *rd, float *re, float *rf, float *rg, float *rh, float *ri, float *rj){
    *ra = (powf(*x, 2)/3)+(powf(*x,3)/2)-(*x/10);
    *rb = (1/(5*powf(*x,2)))-(10/(*x));
    *rc = (powf(*x,2)- powf(2,2)) -(2*(*x)-3);
    *rd = *x/(2*sqrt(*x));
    *re = powf(*e, (-5*(*x)));
    *rf = -12+(3/7)*(powf(*e,-(*x))-1);
    *rg = (1/3)* sinh(3*(*x));
    *rh = 3*sinh(((5*(*p)/3))*(*x)+(*p/10));
    *ri = log(*x+1);
    *rj = log((log(*x)));
}
void print_funcs(float *x, const float *e, const float *p, float *ra, float *rb, float *rc, float *rd, float *re, float *rf, float *rg, float *rh, float *ri, float *rj){
    funcs(x, e, p, ra, rb, rc, rd, re, rf, rg, rh, ri, rj);
    cout << "o resultado da letra 'a' eh: " << *ra <<endl;
    cout << "o resultado da letra 'b' eh: " << *rb <<endl;
    cout << "o resultado da letra 'c' eh: " << *rc <<endl;
    cout << "o resultado da letra 'd' eh: " << *rd <<endl;
    cout << "o resultado da letra 'e' eh: " << *re <<endl;
    cout << "o resultado da letra 'f' eh: " << *rf <<endl;
    cout << "o resultado da letra 'g' eh: " << *rg <<endl;
    cout << "o resultado da letra 'h' eh: " << *rh <<endl;
    cout << "o resultado da letra 'i' eh: " << *ri <<endl;
    cout << "o resultado da letra 'j' eh: " << *rj <<endl;
}

void (*ptr1[])(float *x, const float *e, const float *p, float *ra, float *rb, float *rc, float *rd, float *re, float *rf, float *rg, float *rh, float *ri, float *rj) = {print_funcs, funcs};

int main(){
    float entrada, resultado_a, resultado_b, resultado_c, resultado_d, resultado_e, resultado_f, resultado_g, resultado_h, resultado_i, resultado_j;
    float *x = &entrada, *ra = &resultado_a, *rb = &resultado_b, *rc = &resultado_c, *rd = &resultado_d, *re = &resultado_e, *rf = &resultado_f, *rg = &resultado_g, *rh = &resultado_h, *ri = &resultado_i, *rj = &resultado_j;
    const float euler = 2.71, pi = 3.14; //aqui defini uma contante de euler de 2,71; aqui tem uma constante de pi de 3,14;
    const float *e = &euler, *p = &pi; 
    int opcao;

    cout << "digite o valor de x: ";
    cin >> *x;
    cout << "oque deseja fazer: " << endl;
    cout << "1-printar results\t|\t2-apenas cauculos" << endl;
    cin >> opcao;
    (ptr1[opcao-1])(x, e, p, ra, rb, rc, rd, re, rf, rg, rh, ri, rj);
}
#include <iostream>
using namespace std;

void findFact(int, int *f);

int main(){
    int fact;
    int num1;
    printf("\n Pointer : Find the factorial of a given number :\n");
    printf("------------------------------------------------------\n");
    printf(" Input a number : ");
    scanf("%d", &num1);
    findFact(num1, &fact);
    printf(" The Factorial of %d is : %d \n\n", num1, fact);
}
void findFact(int n, int *f){
    int i;
    *f = 1;
    for (i = 1; i <= n; i++){
        *f = *f * i;
    }
}
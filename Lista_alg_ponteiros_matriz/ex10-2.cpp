#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>

using namespace std;
FILE *matriz = fopen("matrix.txt", "w");
const float euler = 2.72, *e = &euler; // defini um valor contande de e para 2.72;
const float pi = 3.14, *p = &pi;       // defini um valor constante de pi de 3.14;
void preenchimento(float x[5][6], float result_final[5][6])
{
    float valor = -3.0, variacaox = 0.2;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            x[i][j] = valor;
            valor = valor + variacaox;
        }
    }
    for (int h = 0; h < 5; h++)
    {
        for (int k = 0; k < 6; k++)
        {
           cout << x[h][k] << "\t";
           fprintf(matriz, "%.1f \t",x[h][k]);
        } 
        fprintf(matriz, "\n");
        cout << "\n";
    }
    fprintf(matriz, "\n");
    cout << "\n";
}

void equation(float x[5][6], float result_final[5][6])
{
    for (int l = 0; l < 5; l++)
    {
        for (int c = 0; c < 6; c++)
        {
            result_final[l][c] = (1/(sqrt((2*(*p))))) * (pow((*e),(x[l][c])/2));
        }
    }
     for (int h = 0; h < 5; h++)
    {
        for (int k = 0; k < 6; k++)
        {
           cout << result_final[h][k] << "\t";
           fprintf(matriz, "%.4f \t",result_final[h][k]);
        } 
        fprintf(matriz, "\n");
        cout << "\n";
    }
    fprintf(matriz, "\n");
    cout << "\n";
}
void (*ptr1[])(float x[5][6], float result_final[5][6]) = {preenchimento, equation};
int main()
{
    float matrix[5][6], matrizeira[5][6];
    int opcao;
    cout << "oque deseja fazer?" <<endl;
    cout << "1-prenchimento da matrix com variação 0,2\t|\t 2- resultado da equação com plotação de aquivo" << endl;
    cin >> opcao;
    (*ptr1[opcao-1])(matrix, matrizeira);
    fwrite(&matrix, sizeof(float), sizeof(matrix[5][6]), matriz);
    fclose(matriz);
}
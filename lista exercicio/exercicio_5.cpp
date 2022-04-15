#include <iostream>
using namespace std;

struct R3{
    float x, y, z;
};
struct R3 v1, v2;

void soma(R3 v1, R3 v2);

int main(){
    cout <<"----------------------------------------------------------------"<<endl;
    cout <<"\t ola bem vindo"<<endl;
    cout <<"----------------------------------------------------------------"<<endl;
    cout<<"\t digite o valor de v1"<<endl;
    cin>>v1.x>> v1.y>> v1.z;
    cout <<"----------------------------------------------------------------"<<endl;
    cout <<"\t ola bem vindo"<<endl;
    cout <<"----------------------------------------------------------------"<<endl;
    cout<<"\t digite o valor de v2"<<endl;
    cin>>v2.x>> v2.y>> v2.z;
    cout<<"----------------------------------------------------------------"<<endl;
    cout <<"\t aguarde"<< endl;
    cout<<"----------------------------------------------------------------"<<endl;
    system("pause");
    cout <<" os resultados sao respecitivamente: "<<endl;
    soma(v1,v2);   
    system("pause");
    cout<<" obrigado por utilizr o nosso sistema"<<endl;
    system("pause");
}
void soma(R3 v1,R3 v2){
    R3 result;
    result.x = (v1.x + v2.x);
    cout <<"\t "<<result.x<<endl;
    cout<<"----------------------------------------------------------------"<<endl;
    result.y = (v1.y + v2.y);
    cout <<"\t "<<result.y<<endl;
    cout<<"----------------------------------------------------------------"<<endl;
    result.z = (v1.z + v2.z);
    cout <<"\t "<<result.z<<endl;
    cout<<"----------------------------------------------------------------"<<endl;
}
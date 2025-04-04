#include <iostream>
using namespace std;
int main(){
    cout <<"int:"<< sizeof(int)<<"Byte:"<<endl;
    cout <<"float:"<< sizeof(float)<<"Byte:"<<endl;
    cout <<"char:"<< sizeof(char)<<"Byte:"<<endl;
    cout <<"double:"<< sizeof(double)<<"Byte:"<<endl;
    cout <<"bool:"<< sizeof(bool)<<"Byte:"<<endl;

    cout<<"operador de direccion"<<endl;

    int a= 74;
    int b=185;
    cout<<a<<"operador direccion:"<<&a<<endl;
    cout<<b<<"operador direccion:"<<&b<<endl;
    int* direccion=&a;
    cout<<direccion<<endl;
    cout<<*direccion<<endl;
    cout<<&direccion<<endl <<sizeof(direccion)<<endl;
    
}

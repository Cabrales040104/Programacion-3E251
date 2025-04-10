#include <iostream>
using namespace std;
#include <fstream>
#include <string>

int main (int argc, char const *argv[])
{
    ofstream archivo("archivo.txt");
     if(!archivo.is_open()){
        cerr<<"Error al abrir el archivo para escritura"<<endl;
        return 1;
    }
    archivo<<"hola mundo!"<<endl;
    archivo<<"Linea 2"<<endl;
    archivo<<"Linea 3"<<endl;
    archivo<<"Linea 4"<<endl;
    archivo<<"Linea 5"<<endl;
    archivo<<"Linea 6"<<endl;
    archivo.close();

    ifstream archivoLectura("archivo.txt");
    if(!archivoLectura.is_open()){
        cerr<<"Error al abrir el archivo para lectura"<<endl;
    }
    cout<<"Leyendo archivo..."<<endl;

    string linea;
    while (getline(archivoLectura,linea))
    {
        cout<<linea<<endl;
    }
    archivoLectura.close();
    return 0;
}


#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct Persona{
    char nombre[20];
    int edad;
};
// Este programa crea un archivo binario y lo abre para escritura
int main(int argc, char const *argv[]){
    ofstream archivo("Binario.bin", ios::binary);
    if(!archivo.is_open()){
        cerr<<"Error al abrir el archivo para escritura"<<endl;
        return 1;
    

    }
    cout<<"Escribiendo en el archivo..."<<endl;
    Persona p1 = {"Juan", 25};
    Persona p2 = {"Raul", 30};
    Persona p3 = {"Diego", 35};

    archivo.write(reinterpret_cast<char*>(&p1), sizeof(Persona));
    archivo.write(reinterpret_cast<char*>(&p2), sizeof(Persona));
    archivo.write(reinterpret_cast<char*>(&p3), sizeof(Persona));
    archivo.close();
    cout<<"Archivo creado y cerrado."<<endl;
   
    // Ahora abrimos el archivo para lectura
    ifstream archivoLectura("Binario.bin", ios::binary);
    if(!archivoLectura.is_open()){
        cerr<<"Error al abrir el archivo para lectura"<<endl;
    }
       cout<<"Leyendo del archivo..."<<endl;
        Persona p;
        while(archivoLectura.read(reinterpret_cast<char*>(&p), sizeof(Persona))){
            cout<<"Nombre: "<<p.nombre<<", Edad: "<<p.edad<<endl;
        }
        archivoLectura.close();
        cout<<"Archivo cerrado."<<endl;

    
   
        
}

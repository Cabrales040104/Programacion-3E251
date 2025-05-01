#include <iostream>
#include <map>
#include <string>
using namespace std;

enum class Tipopersona {
    Regular,
    Extraordinario,
    Carismatico,
};
class Persona {
    string nombre;
    int edad;
    private:
    Tipopersona tipo;
public:
    Persona(string nombre, int edad){
        this->nombre = nombre; 
        this->edad = edad; 
this->tipo = Tipopersona::Regular;
        }
};

int main(int argc, char const *argv[]) {
    map<string, Persona> socialmap;
    socialmap[1]= Persona("Juan", 25, Tipopersona::Regular);
    socialmap[2]= Persona("Pedro", 30, Tipopersona::Extraordinario);
    socialmap[3]= Persona("Maria", 35, Tipopersona::Carismatico);

    map<string, string> diccionario;
    diccionario["Hola"]= "saludo";
    diccionario["Adios"]= "despedida";
    
    }



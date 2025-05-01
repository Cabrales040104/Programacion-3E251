int main()
#include <iostream>
#include <fstream>
#include <string>
#include <list>

using namespace std;

class Persona{
    string nombre;
    string edad;

    public:
        Persona(string nombre, int edad) {
            this->nombre = nombre;
            this->edad = edad;
        }
};

int main() {
    list<string> nombre;
    nombre. push_back( "Juan");
    nombre. push_back( "Pedro");
    nombre. push_back( "Maria");
    nombre. push_back( "Ana");

    list<int> edades;
    edades. push_back( 25);
    edades. push_back( 30);
    edades. push_back( 35);
    edades. push_back( 40);

    list<Persona> personas;
    for (auto it = nombre.begin(); it != nombre.end(); ++it) {
        
        personas.push_back(Persona(*it,5));
        
    }

    return 0;

}   
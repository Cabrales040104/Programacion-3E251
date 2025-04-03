#include <Serie.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/dom/elements.hpp>
#include <iostream>
#include <thread>
using namespace std;
using namespace ftxui;


  




int main(int argc, char const *argv[])
{
  auto pantalla = ftxui::Screen::Create (
    Dimension::Full(),
    Dimension::Full()
  );
  int fotograma = 0;
  string resetPosition;
  while (true){
    auto documento = vbox(
      spinner(21, fotograma)
    );
      Render(pantalla, documento);
      cout << resetPosition;
      resetPosition = pantalla. ResetPosition();
      pantalla.Print();
      fotograma ++;
      std::this_thread::sleep_for(.24s);
      }
    
  
  
  // Serie serienavidena;

  // serienavidena.ApagarTodo();
  // serienavidena.Imprimir();
  // serienavidena.EncenderTodo();
  // serienavidena.Imprimir();
  // serienavidena.ApagarCantidad(8);
  // serienavidena.Imprimir();
  // serienavidena.EncenderCantidad(3);
  // serienavidena.Imprimir();
  // serienavidena.AlternarEncendido();
  // serienavidena.Imprimir();
  // serienavidena.RecorrerDerecha();
  // serienavidena.Imprimir();
  // serienavidena.RecorrerIzquierda();
  // serienavidena.Imprimir();
  return 0;
}
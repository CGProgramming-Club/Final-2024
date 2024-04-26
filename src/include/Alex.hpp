#ifndef ALEX_HPP
#define ALEX_HPP
#include <iostream>

namespace final {
  class Alex{
    public:
      Alex(bool, bool, int, int, int, int, int, char);
      void rules();
      void hit();
      void stay();
      void start();
      void scores();
      void bet();
  
    private:
      bool Agame = true;
      bool Atf = true;
      int Apscore;
      int Adscore;
      int Achips = 50;
      int Abjlevel = 1;
      int Abet;
      char Arule;
  };  
}; // namespace final

#endif
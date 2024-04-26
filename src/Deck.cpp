#include <iostream>
#include "../include/Deck.hpp"


std::string numbers [13] = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };
std::string suits [4] ={"Hearts","Diamonds","Spades","Clubs"};

namespace final {


   std::string Cards::suit(){
     std::string suit = suits[rand() % 4];
     return suit;
   }
    std::string Cards::name(){

   std::string name = numbers[rand() % 13];
    return name;
    }
  };

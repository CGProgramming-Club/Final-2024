#include "../include/Deck.hpp"


std::string numbers = 0;
std::string suits [4] ={"Hearts","Diamonds","Spades","Clubs"};

namespace Deck {
  class Card {
   std::string suit = suits[rand() % 6]; 

  };
   
} 
#include <iostream>
#include "..Deck.hpp"
//add ../include/deck//
#include <cstdlib>



using namespace Deck;
//change namepace to final//
int main() {
   srand(int(time(NULL)));

std::string a [2] = {" Class ", " Number "};
std::string b [2] = {" Class ", " Number "};
std::string c [2] = {" Class ", " Number "};
std::string d [2] = {" Class ", " Number "};
std::string e [2] = {" Class ", " Number "};

std::string eleven [2] = {"Joker", "Losers"};
Cards card;



std::cout << "Welcome to the Old Maid game, if you don't know how to play, look it up because this is a place for professionals and we don't have time to teach chumps.\n";

a[0] = card.suit();
a[1] = card.name();

b[0] = card.suit();
b[1] = card.name();

c[0] = card.suit();
c[1] = card.name();

d[0] = card.suit();
d[1] = card.name();

e[0] = card.suit();
e[1] = card.name();

while  (a[0] == b[0] && a[1] == b[1]|| a[0] == c[0] && a[1] == c[1] ){

  a[0] = card.suit();
  a[1] = card.name();

  b[0] = card.suit();
  b[1] = card.name();

  c[0] = card.suit();
  c[1] = card.name();

  d[0] = card.suit();
  d[1] = card.name();

  e[0] = card.suit();
  e[1] = card.name();
};



std::cout << a[0] + " " + a [1] + " " + b[0] + " " + b[1]; 
}
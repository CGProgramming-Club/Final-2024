#include <iostream>
#include "include/Deck.hpp"
//add ../include/deck//
#include <cstdlib>
#include "include/Alex.hpp"
#include "Games.cpp"
#include <algorithm>

using namespace final;
//change namepace to final//
int main() {
   srand(int(time(NULL)));

std::string a [2] = {" Class ", " Number "};
std::string b [2] = {" Class ", " Number "};
std::string c [2] = {" Class ", " Number "};
std::string d [2] = {" Class ", " Number "};
std::string e [2] = {" Class ", " Number "};


   std::string f [2] = {" Class ", " Number "};
   std::string g [2] = {" Class ", " Number "};
   std::string h [2] = {" Class ", " Number "};
   std::string i [2] = {" Class ", " Number "};
   std::string j [2] = {" Class ", " Number "};
   
std::string eleven [2] = {"Joker", "Losers"};
Cards card;
Games game;


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


   f[0] = card.suit();
   f[1] = card.name();

   g[0] = card.suit();
   g[1] = card.name();

   h[0] = card.suit();
   h[1] = card.name();

   i[0] = card.suit();
   i[1] = card.name();

   j[0] = card.suit();
   j[1] = card.name();


   
while  (a[0] == b[0] && a[1] == b[1]|| a[0] == c[0] && a[1] == c[1] || a[0] == d[0] && a[1] == d[1] ||a[0] == e[0] && a[1] == e[1] ||b[0] == c[0] && b[1] == c[1] ||b[0] == d[0] && b[1] == d[1] ||b[0] == e[0] && b[1] == e[1] ||c[0] == d[0] && c[1] == d[1] ||c[0] == e[0] && c[1] == e[1] ||d[0] == e[0] && d[1] == e[1]){

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

f[1]=a[1];
g[1]=b[1];
h[1]=c[1];
i[1]=d[1];
j[1]=e[1];

while (f[1]==a[1] || g[1]==b[1]|| h[1]==c[1] || i[1]==d[1]|| j[1]==e[1]){

     f[0] = card.suit();
     

     g[0] = card.suit();
     

     h[0] = card.suit();
     

     i[0] = card.suit();
     

     j[0] = card.suit();     
}

std::string hand [6] = {"f","g","h","i","j","eleven"};

random_shuffle(std::begin(a), std::end(a));
   
   
   
   
}